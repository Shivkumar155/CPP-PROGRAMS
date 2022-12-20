/*
      DATE->12/12/22
      create two classes fruit and basket. attributes of class fruits are ch of
      character type and num of integer type methods of class basket are getdata
      and displaydata class basket declares fruit as a friend class by using
      friend.
*/
#include<iostream>
using namespace std;
class basket;
class fruits
{
	int num;
	char ch[20];
	public:
	fruits()
	{

	}
	friend class basket;
};

class basket
{

	public:
	fruits getdata(fruits obj)
	{
		cout<<"Enter the name of fruit : "<<endl;
		cin>>obj.ch;
		cout<<"Enter the number of fruits : "<<endl;
		cin>>obj.num;
		return  obj;

	}
	void displaydata(fruits obj)
	{
		cout<<"There are "<<obj.num<<" "<<obj.ch<<endl;
	}
};
int main()
{
	fruits obj;
	basket ob;
	fruits obj1 = ob.getdata(obj);
	ob.displaydata(obj1);
  return 0;
}
