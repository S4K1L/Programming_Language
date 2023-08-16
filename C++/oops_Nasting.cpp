#include<iostream>
#include<string>
using namespace std;

class student
{
private:
    string s;

public:
    void input(void);
    void check(void);
    void display(void);
};

void student :: input(void)
{
    cout<<"Enter Student id : ";
    cin>>s;

    check();
}
void student :: check(void)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)!='9' && s.at(i)!='1')
        {
            cout<<"Wrong id"<<endl;
            exit(0);
        }
    }
    display();
}

void student :: display(void)
{
    cout<<endl;
    cout<<"Student Details : "<<endl;
    cout<<endl;
    cout<<"Name : Shakil Mahmud"<<endl;
    cout<<"ID   : 223071091"<<endl;
    cout<<"CGPA : 3.50"<<endl;
    cout<<"Dept : CSE"<<endl;
}


int main()
{
    student shakil;
    shakil.input();

    return 0;
}
