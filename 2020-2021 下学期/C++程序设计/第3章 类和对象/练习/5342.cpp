#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
	private:
		int length,width;
	public:
		Rectangle(int l,int w)
		{
			length=l;
			width=w;
		}
		
		void printArea(int i)
		{
			printf("the area of rec[%d] is %d\n",i,length*width);
		}
};

int main()
{
	Rectangle ra[3]={Rectangle(10,20),Rectangle(30,40),Rectangle(50,60)};
	for(int i=0;i<3;i++)
	{
		ra[i].printArea(i);
	}
	return 0;
}

