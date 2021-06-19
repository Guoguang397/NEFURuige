#include <bits/stdc++.h>
using namespace std;

void myswap(int &a,int &b)
{
	a^=b;
	b=a^b;
	a^=b;
}

int main()
{
	int x,y;
	cin>>x>>y;
	myswap(x,y);
	printf("x=%d y=%d",x,y);
	return 0;
}

