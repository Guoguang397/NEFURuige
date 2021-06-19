#include <bits/stdc++.h>
using namespace std;

class Date
{
	private:
		int year,month,day;
	public:
		void setDate(int yyyy,int MM,int dd)
		{
			year=yyyy;
			month=MM;
			day=dd;
		}
		
		void printDate()
		{
			printf("%d.%d.%d",year,month,day);
		}
};

int main()
{
	Date d;
	Date *p=&d;
	p->setDate(2007,11,22);
	p->printDate();
	return 0;
}

