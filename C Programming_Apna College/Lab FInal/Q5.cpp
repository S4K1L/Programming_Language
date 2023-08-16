#include<bits/stdc++.h>
using namespace std;

int swaps(int *x,int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a=10,b=20;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    swaps(ptr1,ptr2);

    cout<<"A is "<<a<<endl;
    cout<<"B is "<<b<<endl;
    return 0;
}
