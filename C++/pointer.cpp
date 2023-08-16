#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int *b=&a;
    int c=*b;

    cout<<c<<endl;
    return 0;
}
