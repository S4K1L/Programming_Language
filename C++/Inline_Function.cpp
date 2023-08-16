#include<iostream>
using namespace std;
float moneyReceived(int currentmoney, float factor=1.04)
{
    return currentmoney*factor;
}
int main()
{
    int money=10000;
    cout<<"The interest on "<<money<<" After 1 year "<<moneyReceived(money)<<endl<<"The VIP interest on "<<money<<" After 1 year "<<moneyReceived(money,1.1)<<endl;

 return 0;
}
