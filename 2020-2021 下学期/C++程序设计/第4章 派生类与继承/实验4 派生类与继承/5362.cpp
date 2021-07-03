#include <iostream>
#include <iomanip>
using namespace std;

class table
{
	public:
		table(int p)
		{
			i=p;
		}
		void ascii(void);
	protected:
		int i;
};

void table::ascii(void)
{
	int k=1;
	for(; i<=122; i++)
	{
		cout<<setw(4)<<i<<(char)i;
		if ((k)%6==0) cout<<"\n" ;
		k++;
	}
	cout<<"\n";
}

class der_table:public table
{
	public:
		der_table(int p,char*m):table(p)
		{
			c=m;
		}
		void print(void);
	protected:
		char*c;
};

void der_table::print(void)
{
	cout<<c<<"\n";
	table::ascii();
}

int main()
{
	//der_table ob1(32,"ASCII value-char");
	//ob1.print();
	der_table ob2('a',(char *)"ASCII value-char");
	ob2.print();
}

