#include <bits/stdc++.h>
using namespace std;

void qsort(int num[],int l,int r)
{
	int oril=l,orir=r;
	if(l>=r)return;
	int base=num[l];
	while(l<r)
	{
		while(l<r&&num[r]>=base)r--;
		num[l]=num[r];
		while(l<r&&num[l]<=base)l++;
		num[r]=num[l];
	}
	num[l]=base;
	qsort(num,oril,l-1);
	qsort(num,l+1,orir);
}

int main()
{
	int n=0,num[100],tmp;
	while(cin>>num[n]&&num[n++]);
	n--;
	qsort(num,0,n-1);
	for(int i=0;i<n;i++)cout<<num[i]<<" ";
	return 0;
}

