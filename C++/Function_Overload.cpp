#include<iostream>
using namespace std;

int sum(int a, int b)
{
    cout<<"Using 2 argument ";
    return a+b;
}
float sum(int a,float b,int c)
{
    cout<<"Using 3 Argument ";
    return a+b+c;
}

int main()
{
    cout<<"The a+b is "<<sum(3,2.1)<<endl<<"The a+b+c is "<<sum(3,2.1,1)<<endl;
    return 0;
}
