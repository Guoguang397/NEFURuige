#include <iostream>
using namespace std;

class A1
{
public:
	virtual void show()
	{
		cout<<"--a1--"<<endl;
	}
};

class A2
{
public:
	void show()
	{
		cout<<"--a2--"<<endl;
	}
};

class B:public A1,public A2
{
public:
	void show()
	{
		cout<<"--b--"<<endl;
	}
};

int main()
{
    A1 obj1,*p1;
    A2 obj2,*p2;
    p1=&obj1;
    p1->show();
    p2=&obj2;
    p2->show();
    B obj3;
    p1=&obj3;
    p1->show();
    p2=&obj3;
    p2->show();
    return 0;
}

