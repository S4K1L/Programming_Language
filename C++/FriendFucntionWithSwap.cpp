#include<iostream>
using namespace std;

class a2;
class a1
{
private:
    int value1;
    friend void swapFunction(a1 &, a2 &);
public:
    void setdata(int a)
    {
        value1=a;
    }
    void display()
    {
        cout<<value1<<endl;
    }
};
class a2
{
private:
    int value2;
    friend void swapFunction(a1 &, a2 &);
public:
    void setdata(int a)
    {
        value2=a;
    }
    void display(void)
    {
        cout<<value2<<endl;
    }
};

void swapFunction(a1 &x, a2 &y)
{
    int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}

int main()
{
    a1 oa1;
    a2 oa2;
    oa1.setdata(1);
    oa2.setdata(2);
    swapFunction(oa1,oa2);
    cout<<"The value of a is : ";
    oa1.display();
    cout<<"The value of b is : ";
    oa2.display();

    return 0;
}
