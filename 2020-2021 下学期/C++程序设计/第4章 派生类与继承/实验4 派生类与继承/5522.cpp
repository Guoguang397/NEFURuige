#include <iostream>
#include <string.h>
using namespace std;

class Time
{
	public:
		Time(int h,int m,int s)
		{
			hours=h;
			minutes=m;
			seconds=s;
		}
		void display()
		{
			cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
	protected:
		int hours,minutes,seconds;
};

class Date
{
	public:
		Date(int m,int d,int y)
		{
			month=m;
			day=d;
			year=y;
		}
		void display()
		{
			cout<<month<<"/"<<day<<"/"<<year<<endl;
		}
	protected:
		int month,day,year;
};

class Birthtime:public Date,Time
{
	string Childname;
public:
	Birthtime(int y,int M,int d,int h,int m,int s,string name):Date(M,d,y),Time(h,m,s),Childname(name){}
	void show()
	{
		cout<<Childname<<endl;
		Time::display();
		Date::display();
	}
};

int main()
{
	Birthtime b(2007,11,22,9,18,18,"dcc");
	b.show();
	return 0;
}

