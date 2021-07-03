#include <iostream>
using namespace std;

class Date
{
	int y,M,d;
public:
	Date(int y,int M,int d):y(y),M(M),d(d){};
	friend ostream& operator<<(ostream &out, Date &d);
};

ostream& operator<<(ostream &out, Date &d)
{
	out<<d.y<<"."<<d.M<<"."<<d.d;
	return out;
}

int main()
{
	Date d(2016,4,28);
	cout<<d;
	return 0;
}

