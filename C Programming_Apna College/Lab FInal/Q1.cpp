#include<bits/stdc++.h>
using namespace std;

int add(int *x,int *y)
{
    int z =*x + *y;
    return z;
}

int main()
{
    int a=10,b=20;
    cout<<add(&a,&b)<<endl;

    return 0;
}
