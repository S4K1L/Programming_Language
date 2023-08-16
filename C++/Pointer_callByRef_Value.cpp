#include<iostream>
using namespace std;

int& swap(int &x, int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a=1,b=2;

    cout<<"The a is "<<a<<endl<<"The b is "<<b<<endl<<endl<<"After Swap : "<<endl<<endl;

    swap(a,b);

    cout<<"The a is "<<a<<endl<<"The b is "<<b<<endl;


    return 0;
}

