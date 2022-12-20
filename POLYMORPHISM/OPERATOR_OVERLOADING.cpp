/*
      DATE->12/12/22
      ADDING TWO TIMES BY OVERLOADING PLUS(+) OPERATOR.
*/


#include<iostream>
using namespace std;
class time
{
	private:
	int hh,mm,ss;
	public:
	time()
	{
		hh=0;
		mm=0;
		ss=0;
	}
	time(int hour , int minute , int second)
	{
		hh=hour;
		mm=minute;
		ss=second;
	}
	time operator+(time t)
	{
		time x;
        int m,s,h,sd;
		x.hh=hh+t.hh;
		x.mm=mm+t.mm;
		x.ss=ss+t.ss;
        if(x.ss>=60||x.mm>=60)
        {
            m = x.mm%60;
            h = x.mm/60;
            s = x.ss%60;
            sd = x.ss/60;
        }
		x.hh=x.hh+h;
		x.mm=m+sd;
		x.ss=s;

		return x;
	}
	void display()
	{
		cout<<hh<<" hours "<<mm<<" minutes "<<ss<<" seconds "<<endl;
	}
};
int main()
{
	int h1,m1,s1,h2,m2,s2;
	cout<<"enter first time in h/m/s format : "<<endl;
	cin>>h1>>m1>>s1;
	cout<<"enter second time in h/m/s format : "<<endl;
	cin>>h2>>m2>>s2;
	time t1(h1,m1,s1);
	time t2(h2,m2,s2);
	time t3=t1+t2;
	t3.display();
}
