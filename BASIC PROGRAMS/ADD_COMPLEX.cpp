/*
      DATE->12/12/22
      ADDING TWO COMPLEX NUMBERS BY USING CLASSES AND DEFAULT CONSTRUCTOR
*/


#include<iostream>
using namespace std;
class complex
{
	int r1,r2,r,i;
	int i1,i2;
	public:
	complex()
	{
		cout<<"Enter the real part of first number : "<<endl;
		cin>>r1;
		cout<<"Enter imaginary part of first number : "<<endl;
		cin>>i1;
		cout<<"Enter the real part of second number : "<<endl;
		cin>>r2;
		cout<<"Enter the imaginary part of second number : "<<endl;
		cin>>i2;
	}
	void sum()
	{
		r=r1+r2;
		i=i1+i2;
	}
	void display()
	{
		cout<<"sum : "<<r<<"+"<<i<<"i"<<endl;
	}
};
int main()
{
	
	complex obj;
	obj.sum();
	obj.display();
	
}
