#include <bits/stdc++.h>
using namespace std;

void adjustHeap(int num[],int r,int n)
{
	int tmp=num[r];
	for(int i=r*2;i<=n;i*=2)
	{
		if(i+1<=n&&num[i]<num[i+1])i++;
		if(tmp>=num[i])break;
		num[r]=num[i];
		r=i;
	}
	num[r]=tmp;
}

int main()
{
	int n=1,num[100],tmp;
	while(cin>>num[n]&&num[n++]);
	n-=2;
	for(int i=n/2;i>0;i--)adjustHeap(num,i,n);
	for(int i=n;i>0;i--)
	{
		swap(num[1],num[i]);
		adjustHeap(num,1,i-1);
	}
	for(int i=1;i<=n;i++)cout<<num[i]<<" ";
	return 0;
}

