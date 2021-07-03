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
	friend A operator++(A &a);
	friend A& operator++(A &a,int);
};

A operator++(A &a)
{
	A obj(a);
	a.x++;
	a.y++;
	cout<<"x: "<<a.x<<",y: "<<a.y<<endl;
	return obj;
}

A& operator++(A &a,int)
{
	a.x++;
	a.y++;
	cout<<"x: "<<a.x<<",y: "<<a.y<<endl;
	return a;
}

int main()
{
	A a(11,22);
	a++;
	++a;
	a++;
	++a;
	return 0;
}

