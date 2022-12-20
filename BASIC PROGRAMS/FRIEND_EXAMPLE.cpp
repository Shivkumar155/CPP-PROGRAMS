/*
    DATE->12/12/22
		Write a program to find the larger of two given numbers in two different classes using
		friend function
*/
#include<iostream>
using namespace std;
	class B;  //forward declaration
class A
{
	int num;
	public:
	A()
	{
		cout<<"Enter the value of 1st number : "<<endl;
		cin>>num;
	}
	friend void greater(A obj1 , B obj2);
};
class B
{
	int num;
	public:
	B()
	{
		cout<<"Enter the value of 2nd number : "<<endl;
		cin>>num;
	}
	friend void greater(A obj1 , B obj2);
};
void greater(A obj1 , B obj2)
{
	if(obj1.num>obj2.num)
	{
		cout<<obj1.num<<" is greater than "<<obj2.num<<endl;
	}
	else
	{
		cout<<obj2.num<<" is greater than "<<obj1.num<<endl;
	}

}
int main()
{
	A obj1;
	B obj2;
	greater( obj1, obj2);
	return 0;
}
