#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter a number: ";
    cin>>n;
    m=n;

    for(int i=1; i<=n; i++)
    {
        for(int k=m; k>i; k--)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<i; k++)
        {
            cout<<" ";
        }
        for(int j=i; j<=m; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}

