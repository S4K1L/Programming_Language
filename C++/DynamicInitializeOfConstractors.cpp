#include<iostream>
using namespace std;

class Bank
{
    int cash;
    int year;
    float interest;
    float balance;
public:
    Bank() {}
    Bank(int c,int y,int in);
    Bank(int c, int y,float In);
    void print();

};


Bank :: Bank(int c,int y, int in)
{
    cash=c;
    year=y;
    interest=(float)in/100;
    balance=cash;
    for(int i=0; i<y; i++)
    {
        balance=balance*(1+interest);
    }
}

Bank :: Bank(int c,int y, float In)
{
    cash=c;
    year=y;
    interest=In;
    balance=cash;
    for(int i=0; i<y ; i++)
    {
        balance=balance*(1+interest);
    }
}

void Bank :: print()
{
    cout<<"Cash Deposit : "<<cash<<endl
        <<"Year of :"<<year<<endl
        <<"Total Balance with Profit : "<<balance<<endl;
}

int main()
{
    Bank b1,b2;
    int c,y,in;
    float In;

    cout<<"Enter Cash Amount : ";
    cin>>c;
    cout<<"Enter year : ";
    cin>>y;
    cout<<"Enter Interest : ";
    cin>>In;
    cout<<endl;

    b1 = Bank(c,y,In);
    b1.print();
    cout<<endl;


    cout<<"Enter Cash Amount : ";
    cin>>c;
    cout<<"Enter year : ";
    cin>>y;
    cout<<"Enter Interest : ";
    cin>>in;
    cout<<endl;

    b2 = Bank(c,y,in);
    b2.print();
    return 0;
}
