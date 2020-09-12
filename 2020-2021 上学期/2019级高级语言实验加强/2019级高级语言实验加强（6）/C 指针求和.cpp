#include <bits/stdc++.h>
using namespace std;

void sum(int a[],int x,int* y)
{
	*y=0;
	for(int i=0;i<x;i++)*y+=a[i];
}

int main()
{
	int a[20],x,y;
	x=5;
	for(int i=0; i<x; i++)cin>>a[i];
	sum(a,x,&y);
	cout<<y<<endl;
	return 0;
}
