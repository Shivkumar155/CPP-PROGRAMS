/*
      DATE->12/12/22
      FUNCTION OVERRIDING USING POINTER OF BASE CLASS
*/


#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void show()
    {
        cout<<"its base class"<<endl;
    }
};
class Child : public Base
{
    public:
    void show()
    {
        cout<<"its child class"<<endl;
    }
};
int main()
{
    Base *B;
    Base obj1;
    Child obj2;
    B=&obj1;
    B->show();
    B=&obj2;
    B->show();
}
