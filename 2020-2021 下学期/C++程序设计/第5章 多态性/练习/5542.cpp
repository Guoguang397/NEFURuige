#include <iostream>
using namespace std;

class A
{
private:
	int x,y;
public:
	A(int x,int y):x(x),y(y)
	{
		cout<<"x: "<<x<<",y: "<<y<<endl;
	}
	A(const A& a)
	{
		x=a.x;
		y=a.y;
	}
	A operator++()
	{
		A obj(*this);
		x++;
		y++;
		cout<<"x: "<<x<<",y: "<<y<<endl;
		return obj;
	}
	A& operator++(int)
	{
		x++;
		y++;
		cout<<"x: "<<x<<",y: "<<y<<endl;
		return *this;
	}
};

int main()
{
	A a(11,22);
	a++;
	++a;
	a++;
	++a;
	return 0;
}

