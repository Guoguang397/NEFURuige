#include <bits/stdc++.h>
using namespace std;

class Book
{
	private:
		int qu,price;
	public:
		Book(int q)
		{
			qu=q;
			price=q*10;
		}
		void print(int i)
		{
			printf("p[%d] is %d\n",i,qu*price);
		}
};

int main()
{
	Book *p[5];
	for(int i=0;i<5;i++)
	{
		p[i]=new Book(i+1);
		p[i]->print(i);
	}
	return 0;
}

