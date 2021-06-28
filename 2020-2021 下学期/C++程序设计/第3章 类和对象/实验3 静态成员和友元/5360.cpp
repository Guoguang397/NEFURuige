#include <bits/stdc++.h>
using namespace std;

class Date
{
private:
	int y,M,d;
public:
	Date(int y,int M,int d)
	{
		this->y=y;
		this->M=M;
		this->d=d;
	}
	friend int getDistance(Date &d1,Date &d2);
};

const int daysofMonth[]={0,31,30,31,30,31,30,31,31,30,31,30,31}; 
int getDistance(Date &d1,Date &d2)
{
	int days1=(d1.y-1)/4-(d1.y-1)/100+(d1.y-1)/400;
	int days2=(d2.y-1)/4-(d2.y-1)/100+(d2.y-1)/400;
	days1=days1*366+(d1.y-1-days1)*365;
	days2=days2*366+(d2.y-1-days2)*365;
	for(int i=1;i<d1.M-1;i++)days1+=daysofMonth[i];
	for(int i=1;i<d2.M-1;i++)days2+=daysofMonth[i];
	if(d1.M>2&&((d1.y%4==0&&d1.y%100!=0)||d1.y%400==0))days1++;
	if(d2.M>2&&((d2.y%4==0&&d2.y%100!=0)||d2.y%400==0))days2++;
	days1+=d1.d;
	days2+=d2.d;
	return days1-days2;
}

int main()
{
	int y,M,d;
	cin>>y>>M>>d;
	Date d1(y,M,d);
	cin>>y>>M>>d;
	Date d2(y,M,d);
	cout<<"two date distance = "<<getDistance(d1,d2);
	return 0;
}

