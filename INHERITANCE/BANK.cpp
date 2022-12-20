/*
    DATE->20/12/22
    Implementing bank management system using classes and inheritance. 
*/
#include<iostream>
using namespace std;

class account
{
	public:
	char name[20];
	long int account_number;

	void getaccountdetails()
	{
		cout<<"Enter name of account holder : "<<endl;
        cin>>name;
		cout<<"Enter account number of account holder : "<<endl;
		cin>>account_number;
	}
	void showdetails()
	{
		cout<<"Name of account holder : "<<name<<endl;
		cout<<"Account number is : "<<account_number<<endl;
	}
};
class current_account : public account
{
	public:
	int current_balance;
	int amount;
	current_account()
	{
		current_balance=1000;
	}

	void c_display()
	{

		cout<<"current balance is : "<<current_balance<<endl;
	}
	void c_deposit()
	{
		cout<<"enter amount to be deposited : "<<endl;
		cin>>amount;
		current_balance=current_balance+amount;
	}
	void c_withdrawl()
	{
		cout<<"Enter amount to be withdrawed : "<<endl;
		cin>>amount;
		if((current_balance-amount)<1000)
		{
			cout<<"You cannot withdraw due to minimum balance policy"<<endl;
		}
		else
		{
			current_balance=current_balance-amount;
		}
	}
};
class saving_account : public account
{
	public:
	int amount;
	int saving_balance;

	saving_account()
	{
		saving_balance=500;
	}
	void s_display()
	{

		cout<<"The saving balance is :"<<saving_balance<<endl;
	}
	void s_deposit()
	{
		cout<<"enter amount to be deposited : "<<endl;
		cin>>amount;
		saving_balance=saving_balance+amount;
	}
	void s_withdrawl()
	{
		cout<<"enter amount to be withdrawed : "<<endl;
		cin>>amount;
		if((saving_balance-amount)<500)
		{
			cout<<"you cannot wirthdraw due to bank minimum balance policy"<<endl;
		}
		else
		{
			saving_balance=saving_balance-amount;
		}
	}
};
int main()
{
	int cho;
	char acctype;
	char ch;
	current_account cobj;
	saving_account sobj;
	do{
	cout<<"Enter your account type(S/C) : "<<endl;
	cin>>acctype;
	if(acctype=='S'||acctype=='s')
	{
		sobj.getaccountdetails();
		sobj.showdetails();
		cout<<"enter yout choice "<<endl;
		cout<<"1.deposit\n2.withdrawl\n3.balance enquiry"<<endl;
		cout<<"choose option : "<<endl;
		cin>>cho;
		switch(cho)
		{
		case 1 : sobj.s_deposit();
			 break;

		case 2 : sobj.s_withdrawl();
			 break;

		case 3 : sobj.s_display();
			 break;

		default : cout<<"choose correct option"<<endl;
			  break;
		}
	}
	else if(acctype=='c'||acctype=='C')
	{
		cobj.getaccountdetails();
		cobj.showdetails();
		cout<<"enter yout choice "<<endl;
		cout<<"1.deposit\n2.withdrawl\n3.balance enquiry"<<endl;
		cout<<"choose option : "<<endl;
		cin>>cho;
		switch(cho)
		{
		case 1 : cobj.c_deposit();
			 break;

		case 2 : cobj.c_withdrawl();
			 break;

		case 3 : cobj.c_display();
			 break;

		default : cout<<"choose correct option"<<endl;
			  break;
		}
	}
	else
	{
		cout<<"enter correct account type."<<endl;
	}
	cout<<"do you want to continue(Y/y) -> "<<endl;
	cin>>ch;
	}while(ch=='Y'||ch=='y');
}
