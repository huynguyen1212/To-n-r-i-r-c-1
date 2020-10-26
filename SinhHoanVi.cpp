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
        a[i]=i;
}
void Display()
{
    for (int i=1;i<=n;i++)
        cout << a[i];
    cout << endl;
}
void Sinh()
{
    int i=n-1;
    while (a[i]>a[i+1])
        i--;
    int k=n;
    while (a[i]>a[k])
        k--;
    int temp=a[i];
    a[i]=a[k];
    a[k]=temp;
    int l=i+1,r=n;
    while (l<=r)
    {
        int temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        l++;
        r--;
    }
}
bool Check()
{
    for (int i=1;i<=n;i++)
        if (a[i]!=n-i+1)
            return false;
    return true;
}
