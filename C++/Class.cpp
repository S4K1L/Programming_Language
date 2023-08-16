#include<iostream>

using namespace std;

class student
{
private:
    string name,dept;
    float result;
public:
    int id;
    void setdata(string name1,float result1,string dept1);
    void getdata(){
        cout<<"Name of Student : "<<name<<endl<<"ID of Student : "<<id<<endl<<"Result of student : "<<result<<endl<<"Dept is : "<<dept<<endl;
    }
};

void student :: setdata(string name1, float result1, string dept1)
{
    name=name1;
    result=result1;
    dept=dept1;
}

int main()
{
    student s1;
    s1.id;
    cout<<"input ID : ";
    cin>>s1.id;
    cout<<endl;
    cout<<"Student Details : "<<endl;

    s1.setdata("Shakil",3.50,"CSE");
    s1.getdata();
    return 0;
}
