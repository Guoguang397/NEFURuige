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
			printf("b[%d] is %d\n",i,qu*price);
		}
};

int main()
{
	Book b[5]={Book(1),Book(2),Book(3),Book(4),Book(5)};
	for(int i=0;i<5;i++)
	{
		b[i].print(i);
	}
	return 0;
}

