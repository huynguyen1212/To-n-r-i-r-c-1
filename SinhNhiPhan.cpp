#include<iostream>
using namespace std;

int a[100],n;

void KhoiTao();
void Display();
void Sinh();
bool Check();

int main()
{
    cin >> n;
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
    for (int i=1;i<=n;i++)
        a[i]=0;
}
void Display()
{
    for (int i=1;i<=n;i++)
        cout <<a[i];
    cout << endl;
}
void Sinh()
{
    int i=n;
    while (a[i]==1)
    {
        a[i]=0;
        i--;
    }
    a[i]=1;
}
bool Check()
{
    for (int i=1;i<=n;i++)
        if (a[i]==0)
            return false;
    return true;
}