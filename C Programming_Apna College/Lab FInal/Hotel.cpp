#include<bits/stdc++.h>
using namespace std;

class Hotel
{
private:
    int id;
public:
    char name[100];
    char dept[100];
    int batch;

    void setdata(int id1);

    void getdata();
    void display()
    {
        cout<<"Details of Student : "<<endl;
        cout<<"Name is   : "<<name<<endl;
        cout<<"Id is     : "<<id<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Batch is  : "<<batch<<endl;
    }
};

void Hotel :: setdata(int id1)
{
    id=id1;
}

void Hotel :: getdata()
 {

        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter dept : ";
        cin>>dept;
        cout<<"Enter Batch : ";
        cin>>batch;
}

int main()
{
    Hotel s1,s2;
    s1.getdata();
    s1.setdata(1091);
    s2.getdata();
    s2.setdata(1098);

    s1.display();
    s2.display();
    return 0;
}
