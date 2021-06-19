#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
	private:
		int length,width;
	public:
		Rectangle(int l,int w)
		{
			cout<<"using normal constructor\n";
			length=l;
			width=w;
		}
		
		Rectangle(const Rectangle &ra)
		{
			cout<<"using copy constructor\n";
			length=ra.length*2;
			width=ra.width*2;
		}
		
		void print()
		{
			printf("l= %d w= %d\n",length,width);
		}
};

int main()
{
	Rectangle p1(30,40);
	p1.print();
	Rectangle p2(p1);
	p2.print();
	Rectangle p3=p1;
	p3.print();
	return 0;
}

