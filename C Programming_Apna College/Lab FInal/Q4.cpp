#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10,b=20;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    cout<<"The Sum is "<<*ptr1+*ptr2<<endl;
    return 0;
}
