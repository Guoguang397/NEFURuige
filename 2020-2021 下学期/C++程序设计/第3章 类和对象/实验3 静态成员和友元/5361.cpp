#include <iostream>
using namespace std;

class Point
{
	int x,y;
public:
	Point(int x,int y)
	{
		this->x=x;
		this->y=y;
	}
	friend int getdX(Point &p1,Point &p2);
	friend int getdY(Point &p1,Point &p2);
};

int getdX(Point &p1,Point &p2)
{
	return p2.x-p1.x; 
}

int getdY(Point &p1,Point &p2)
{
	return p2.y-p1.y;
}

int main()
{
	int x,y;
	cin>>x>>y;
	Point p1(x,y);
	cin>>x>>y;
	Point p2(x,y);
	cout<<getdX(p1,p2)<<" "<<getdY(p1,p2);
	return 0;
}

