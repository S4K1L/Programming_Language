#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3],counts=0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }

     for(int i=0; i<3; i++)
    {
        for(int j=i; j<=i; j++)
        {
            if(arr[i][j]==1)
            {
                counts++;
            }
        }
    }
    if(counts==3)
    {
        cout<<"This is Identity Matrix"<<endl;
    }else
    {
        cout<<"Not Identity Matrix"<<endl;
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

