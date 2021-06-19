#include <bits/stdc++.h>
using namespace std;

int pow3(int x)
{
	printf("%d*%d*%d= ",x,x,x);
	return x*x*x;
}

long pow3(long x)
{
	printf("%ld*%ld*%ld= ",x,x,x);
	return x*x*x;
}

double pow3(double x)
{
	printf("%.2f*%.2f*%.2f= ",x,x,x);
	return x*x*x;
}

int main()
{
	int a;
	long b;
	double c;
	cin>>a>>b>>c;
	cout<<pow3(a)<<endl;
	cout<<pow3(b)<<endl;
	cout<<pow3(c)<<endl;
	return 0;
}

