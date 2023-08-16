#include<iostream>
using namespace std;

class complex
{
private:
    int a,b;
public:
    friend complex sumcomplex(complex o1,complex o2);

    void setnumber(int v1, int v2)
    {
        a=v1;
        b=v2;
    }
    void getnumber()
    {
        cout<<"The sum of "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex  sumcomplex(complex o1, complex o2)
{
    complex o3;

    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    complex s1,s2,sum;
    s1.setnumber(1,2);
    s1.getnumber();

    s2.setnumber(3,4);
    s2.getnumber();

    sum=sumcomplex(s1,s2);
    sum.getnumber();
    return 0;
}
