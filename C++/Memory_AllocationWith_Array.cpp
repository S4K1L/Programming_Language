#include<iostream>
using namespace std;

class shop
{
private:
    int item;
    int itemcode[100];
    int price[100];
    int counter;
    int total;
public:
    void itemamount(void);
    void setprice(void);
    void inticount(void){counter=0;}
    void intitotal(void){total=0;}
    void display(void);

};
void shop :: itemamount(void)
{
    cout<<"How many item you buy : ";
    cin>>item;
    for(int i=0; i<item; i++)
    {
        setprice();
    }
}

void shop :: setprice(void)
{
    cout<<"Enter item code of "<<counter+1<<" : ";
    cin>>itemcode[counter];
    cout<<"Enter item price : ";
    cin>>price[counter];

    counter++;
}
void shop :: display(void)
{
    cout<<endl;
    cout<<"Details of item : "<<endl;
    for(int i=0; i<counter; i++)
    {
        cout<<"Item code "<<itemcode[i]<<" price is "<<price[i]<<endl;
        total=total+price[i];
    }
    cout<<"Total price of "<<item<<" is : "<<total<<" Taka"<<endl;
}


int main()
{
    shop dukan;
    dukan.inticount();
    dukan.intitotal();
    dukan.itemamount();
    dukan.display();
    return 0;
}
