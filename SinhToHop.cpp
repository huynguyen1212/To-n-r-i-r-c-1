#include<iostream>
using namespace std;

int a[100],n,k;

void KhoiTao();
void Display();
void Sinh();
bool Check();

int main()
{
    cin >> n >> k;
    KhoiTao();
    while (Check()==false)
    {
        Display();
        Sinh();
    }
    Display();
    return 0;
}
void KhoiTao()
{
    for (int i=1;i<=k;i++)
        a[i]=i;
}
void Display()
{
    for (int i=1;i<=k;i++)
        cout << a[i] <<" ";
    cout << endl;
}
void Sinh()
{
    int i=k;
    while (a[i]==n-k+i)
        i--;
    a[i]+=1;
    for (int j=i+1;j<=k;j++)
        a[j]=a[j-1]+1;
}
bool Check()
{
    for (int i=1;i<=k;i++)
        if (a[i]!=n-k+i)
            return false;
    return true;
}