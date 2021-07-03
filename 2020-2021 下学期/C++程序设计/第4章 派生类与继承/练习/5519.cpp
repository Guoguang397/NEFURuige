#include <iostream>
using namespace std;

class Base1
{
	int x;
public:
	Base1(int x)
	{
		this->x=x;
	}
	int getX()
	{
		return x;
	}
};

class Base2
{
	int y;
public:
	Base2(int y)
	{
		this->y=y;
	}
	int getY()
	{
		return y;
	}
};

class Derived:public Base1,private Base2
{
	int z;
public:
	Derived(int x,int y,int z):Base1(x),Base2(y)
	{
		this->z=z;
	}
	void show()
	{
		cout<<"x="<<Base1::getX()<<endl;
		cout<<"y="<<Base2::getY()<<endl;
		cout<<"z="<<z;
	}
};

int main()
{
	Derived obj(1,3,5);
	obj.show();
	return 0;
}

