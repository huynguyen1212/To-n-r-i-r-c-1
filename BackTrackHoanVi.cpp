#include<iostream>
using namespace std;

int a[100],n;
bool check[100];

void KhoiTao();
void Try(int i);
void Display();

int main()
{
    cin >> n;
    KhoiTao();
    Try(1);
    return 0;
}
void KhoiTao()
{
    for (int i=1;i<=n;i++)
        check[i]=false;
}
void Try(int i)
{
    for (int j=1;j<=n;j++)
    {
        if (check[j]==false)
        {
            a[i]=j;
            check[j]=true;
            if (i==n)
                Display();
            else
            {
                Try(i+1);
            }
            check[j]=false;
        }
    }
}
void Display()
{
    for (int i=1;i<=n;i++)
        cout <<a[i];
    cout << endl;
}