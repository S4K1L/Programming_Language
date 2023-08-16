#include<bits/stdc++.h>
using namespace std;

int swaps(int &x, int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int x=4;
    int y=5;

    swaps(x,y);

    cout<<"X is : "<<x<<endl;
    cout<<"Y is : "<<y<<endl;
    return 0;
}
