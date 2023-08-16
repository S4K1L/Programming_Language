#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    int *ptr1,*ptr2;
    cin>>a;
    cin>>b;
    ptr1 = &a;
    ptr2 = &b;
    if(*ptr1==*ptr2)
    {
        cout<<"Two are Equal"<<endl;
    }
    else if(*ptr1>*ptr2)
    {
        cout<<*ptr1<<" is Greater"<<endl;
    }else
    {
        cout<<*ptr2<<" is Greater"<<endl;
    }

    return 0;
}
