#include<iostream>
using namespace std;

class Number
{
    int num;
public:
    Number() {}
    Number(int a)
    {
        num = a;
    }

    Number(Number &obj)
    {
        cout<<"Using Copy Constructor"<<endl;
        num = obj.num;
    }

    void Display()
    {
        cout<<"The number is "<<num<<endl;
    }
};

int main()
{
    Number n1(1);
    n1.Display();

    //Invoke Using Copy Constructor
    Number n2(n1);
    n2.Display();

    return 0;
}
