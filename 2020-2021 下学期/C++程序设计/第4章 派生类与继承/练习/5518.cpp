#include <iostream>
using namespace std;

class B
{
	int i;
public:
	B(int i)
	{
		this->i=i;
		cout<<"c base"<<endl;
	}
	~B()
	{
		cout<<"d base"<<endl;
	}
	void show()
	{
		cout<<i<<endl;
	}
};

class D:public B
{
	int j;
public:
	D(int i,int j):B(i)
	{
		this->j=j;
		cout<<"c derived"<<endl;
	}
	~D()
	{
		cout<<"d derived"<<endl;
	}
	void show()
	{
		cout<<j<<endl;
		B::show();
	}
};

int main()
{
	D obj(50,60);
	obj.show();
	return 0;
}

