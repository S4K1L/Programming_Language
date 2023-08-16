#include<iostream>
using namespace std;

class Booking
{
public:
    int id=1001;
    string from;
    string to;
    int guestNo=1;
    void setBooking()
    {
    /*  this->id=id;
        this->from=from;
        this->to=to;
        this->guestNo=guestNo;*/
        cout<<"Fill-Up By Hotel Authority : "<<endl;
        cout<<"Booking ID : "<<id<<endl;
        cout<<"Guest Number = "<<guestNo<<endl;
        cout<<"From Date : ";
        cin>>from;
        cout<<"To Date : ";
        cin>>to;
    }
    void getBooking()
    {
        cout<<"Guest Number = "<<guestNo<<endl;
        cout<<"Booking ID = "<<id<<endl;
        cout<<"Date From = "<<from<<"-April-2023"<<" to "<<to<<"-April-2023"<<endl;

    id++;
    guestNo++;
    }

};
class Room : public Booking
{
public:
    int id;
    string roomType;
    void setRoom()
    {
        /* this->id=id;
        this->roomType=roomType;*/
        //cout<<"Fill-Up by Hotel Authority :"<<endl;
        cout<<"Enter Room ID : ";
        cin>>id;
        cout<<"Enter Room Type : ";
        cin>>roomType;
    }
    void getRoom()
    {
        cout<<"Room ID = "<<id<<endl;
        cout<<"Room Type = "<<roomType<<endl;
    }
};
class Guest : public Booking
{
public:
    string name;
    string surname;
    int age;
    void setGuest()
    {
        /*this->name=name;
        this->surname=surname;
        this->age=age;*/

        cout<<"Fill-Up By Guest : "<<endl;
        cout<<"Enter your First name : ";
        cin>>name;
        cout<<"Enter your Surname : ";
        cin>>surname;
        cout<<"Enter your Age : ";
        cin>>age;
    }
    void getGuest()
    {
        cout<<"Guest Name = "<<name<<" "<<surname<<endl;
        cout<<"Age = "<<age<<endl;
    }
};
class Payment : public Booking
{
public:
    int amount=0;
    int tempamount;
    string cardnumber;
    void setPayment()
    {
        /*this->amount=amount;
        this->cardnumber=cardnumber;*/

        cout<<"Fill-up By Hotel Authority : "<<endl;
        cout<<"Enter your Card Number : ";
        cin>>cardnumber;
        cout<<"Enter Amount : ";
        cin>>amount;

        tempamount=(amount/100)*15;
        amount=amount+tempamount;
    }
    void getPayment()
    {

        cout<<"Card Number = "<<cardnumber<<endl;
        cout<<"Amount = "<<amount<<"Taka"<<endl;

    }
};

int main()
{
    Guest guest;
    Room room;
    Payment payment;
    int n;
    cout<<"WELLCOME TO SIRUS HOTEL\b"<<endl;
    cout<<"Enter Guest Number : ";
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++)
    {
    cout<<"_____________Booking Start Now____________"<<endl;
    room.setBooking();
    room.setRoom();
cout<<endl;
    guest.setGuest();
cout<<endl;
    //Payment payment;
    payment.setPayment();

    cout<<endl<<endl;
    cout<<"______________Booking Review________________: "<<endl<<endl;

    room.getBooking();
    room.getRoom();
    guest.getGuest();
    payment.getPayment();

    cout<<endl<<"_______________Booking FINISHED________________"<<endl<<endl;
    }
    return 0;
}
