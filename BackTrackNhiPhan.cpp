#include<iostream>
using namespace std;

int a[100],n;

void Try(int i);
void Display();

int main()
{
    cin >> n;
    Try(1);
    return 0;
}
void Display()
{
    for (int i=1;i<=n;i++)
        cout << a[i];
    cout << endl;
}
void Try(int i)
{
    for (int j=0;j<=1;j++)
    {
        a[i]=j;
        if (i==n)
            Display();
        else
        {
            Try(i+1);
        }
    }
}