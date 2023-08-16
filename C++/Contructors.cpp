#include<iostream>
using namespace std;

class complex
{
    int a,b;
public:
    complex(void);
    void print()
    {
        cout<<"The value of a & b is : "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex :: complex()
{
    a=20;
    b=30;
}


int main()
{
    complex c1;
    c1.print();
    return 0;
}
