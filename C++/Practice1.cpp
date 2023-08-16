#include<iostream>
using namespace std;

int glo=2;
void sum(){
    int a;
    glo=3;
cout<<"\n"<<glo;
}

int main()
{
    int glo=3;
    glo=4;
    int a=1;
    int b=2;


    cout<<"The Value of a is "<<a;
    sum();



    cout<<"\n"<<glo;
    return 0;
}
