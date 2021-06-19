#include <bits/stdc++.h>
using namespace std;

class Date
{
	private:
		int year,month,day;
	public:
		Date(int yyyy,int MM,int dd)
		{
			year=yyyy;
			month=MM;
			day=dd;
		}
		
		friend void printDate(Date d);
};


void printDate(Date d)
{
	printf("%d.%d.%d",d.year,d.month,d.day);
}
int main()
{
	Date d(2007,11,22);
	printDate(d);
	return 0;
}

