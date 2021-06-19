#include <bits/stdc++.h>
using namespace std;

int sroot(int x)
{
	return sqrt(x);
}

long sroot(long x)
{
	return sqrt(x);
}

double sroot(double x)
{
	return sqrt(x);
}

int main()
{
	int a;
	long b;
	double c;
	cin>>a>>b>>c;
	cout<<"sqrt(i)= "<<sroot(a)<<" ";
	cout<<"sqrt(l)= "<<sroot(b)<<" ";
	cout<<"sqrt(d)= "<<sroot(c);
	return 0;
}

