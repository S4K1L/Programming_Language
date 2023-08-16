#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

//factorial = n*(n-1)
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    //cout<<"The factorial of "<<n<<" is " <<factorial(n)<<endl;

    cout<<"The fibonacchi Series is "<<fib(n)<<endl;
    return 0;
}
