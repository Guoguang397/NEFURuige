#include <bits/stdc++.h>
using namespace std;

void sort2(int &a,int &b)
{
	if(b<a)
	{
		a^=b;
		b=a^b;
		a^=b;
	}
}

int main()
{
	int x,y;
	cin>>x>>y;
	sort2(x,y);
	printf("x= %d y= %d",x,y);
	return 0;
}

