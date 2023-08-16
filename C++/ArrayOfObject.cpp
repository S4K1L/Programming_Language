#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    int salary;
public:
    void setid(void)
    {
        salary=122;
        cout<<"Enter Employee id : ";
        cin>>id;
        cout<<endl;
    }
    void getid(void)
    {
        cout<<"The "<<id<<" Employee salary is "<<salary<<endl;
        cout<<endl;
    }
};

int main()
{
    Employee fb[4];
    for(int i=0; i<4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    return 0;
}
