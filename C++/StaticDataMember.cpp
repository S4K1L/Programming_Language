#include<iostream>
#include<string>

using namespace std;

class Employee
{
private:
    int id;
    string name;
    static int counter;
    int position;

public:

void setinfo(void)
{
    cout<<"Enter Employee id : ";
    cin>>id;
    cout<<"Enter Employee name : ";
    cin>>name;
    counter++;
    cout<<endl;
}
void display(void)
{
    cout<<"Details of Employee :"<<endl;
    cout<<endl;
        cout<<"Employee position is : "<<counter<<endl<<"Employee id is : "<<id<<endl<<"Employee name is : "<<name<<endl;
    cout<<endl;
}

};
int Employee :: counter=1000;


int main()
{
    Employee s1;
    s1.setinfo();
    s1.display();

    return 0;
}
