/*
      DATE->20/12/22
      Calculating electricity bill by using nested conditional statements, classes & Inheritance (use array of object).
*/

#include<iostream>
#define max 100
using namespace std;
class bill
{
    int units;
    float charge;
    char name[20];
    public:
    void getdata();
    void calc_charge();
    void display();
};
void bill ::getdata()
{
    cout<<"\nEnter name of user : ";
    cin>>name;
    cout<<"\nEnter units consumed : ";
    cin>>units;
}
void bill::calc_charge()
{
    if(units<=100)
    {
        charge = units*0.6;
    }
    else if(units>100&&units<=200)
    {
        charge = units*0.8;
    }
    else
    {
        charge = units*0.92;
    }
    if(charge<=50)
    {
        charge = 50;
    }
    else if(charge>300)
    {
        charge = charge + (charge*0.15);
    }
}
void bill::display()
{
    cout<<"\nName of user is : "<<name<<endl;
    cout<<"bill amount is : "<<charge<<endl;
}
int main()
{
    int i , num;
    bill b[max];
    cout<<"Enter number of users : ";
    cin>>num;
    for(i=0;i<num;i++)
    {
        b[i].getdata();
        b[i].calc_charge();
    }
    for(i=0;i<num;i++)
    {
        b[i].display();
    }      
}
