/*
      DATE->20/12/22
      ADDING TWO TIME BY OBJECTS BY USING THIS FUNCTION.
*/


#include <iostream>
using namespace std;
 
class Time
{
private:
    int hh;
    int mm;
    int ss;
 
public:
    void getTime();
    void putTime();
    void addTime(Time T1,Time T2);
};
 
void Time::getTime()
{
    cout << "Enter time:" << endl;
    cout << "hours : ";    cin>>hh;
    cout << "minutes : ";  cin>>mm;
    cout << "seconds : ";  cin>>ss;
}
 
void Time::putTime()
{
    cout << endl;
    cout << "Time after add: ";
    cout << hh << ":" << mm << ":" << ss << endl;
}
 
void Time::addTime(Time T1,Time T2)
{
     
    this->ss=T1.ss+T2.ss;
    this->mm=T1.mm+T2.mm + this->ss/60;;
    this->hh= T1.hh+T2.hh + (this->mm/60);
    this->mm %=60;
    this->ss %=60;
}
 
 
int main()
{
    Time T1,T2,T3;
    T1.getTime();
    T2.getTime();
    T3.addTime(T1,T2);
    T3.putTime();
     
    return 0;
}
