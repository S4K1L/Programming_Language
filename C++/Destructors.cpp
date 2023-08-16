#include<iostream>
using namespace std;

//Global Variable
int count=0;

class num
{
public:
    num()
    {
        count++;
        cout<<"This is Constructor number "<<count<<endl;
    }
    ~num()
    {
        cout<<"This is Destructor number "<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"Main Function"<<endl;
    cout<<"Creating First Object "<<endl;
    num n1;
    {
        cout<<"Entering the Blocks "<<endl;
        cout<<"Creating 2 Object "<<endl;
        num n2,n3;
        cout<<"Exiting this Block"<<endl;
    }
    cout<<"Again Main Function"<<endl;
    return 0;
}
