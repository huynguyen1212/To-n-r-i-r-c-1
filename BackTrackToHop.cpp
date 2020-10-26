#include<iostream>
using namespace std;

int a[100],n,k;

void Try(int i);
void Display();

int main()
{
    cin >> n >> k;
    a[0]=0;
    Try(1);
    return 0;
}

void Try(int i)
{
    for (int j=a[i-1]+1;j<=n-k+i;j++)
    {
        a[i]=j;
        if (i==k)
            Display();
        else
        {
            Try(i+1);
        }
    }
}
void Display()
{
    for (int i=1;i<=k;i++)
        cout << a[i] <<" ";
    cout << endl;
}