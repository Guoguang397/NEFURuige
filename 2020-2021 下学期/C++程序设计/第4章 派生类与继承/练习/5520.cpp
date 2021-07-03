#include <iostream>
using namespace std;

class Base
{
	int a;
public:
	Base(int a)
	{
		cout<<"c base"<<endl;
		this->a=a;
	}
};

class Base1:virtual public Base
{
	int b;
public:
	Base1(int a,int b):Base(a) 
	{
		cout<<"c base1"<<endl;
		this->b=b;
	}
};

class Base2:virtual public Base
{
	int c;
public:
	Base2(int a,int c):Base(a) 
	{
		cout<<"c base2"<<endl;
		this->c=c;
	}
};

class Derived:public Base1,Base2
{
public:
	Derived(int a,int b,int c):Base(a),Base1(a,b),Base2(a,c)
	{
		cout<<"c derived"<<endl;
	}
};

int main()
{
	Derived d(1,2,3);
	return 0;
}

