#include<iostream>
using namespace std;

class complex
{
    int a,b;
public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a=x;
        b=0;
    }
    complex()
    {
        a=0;
        b=0;
    }
    void print()
    {
        cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main()
{
    complex c1(5,6);
    c1.print();

    complex c2(0,6);
    c2.print();

    complex c3;
    c3.print();
    return 0;
}
