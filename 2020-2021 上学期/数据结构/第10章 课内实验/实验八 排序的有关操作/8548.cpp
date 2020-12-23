#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n=0,num[100],mip;
	while(cin>>num[n]&&num[n++]);
	n--;
	for(int i=0;i<n;i++)
	{
		mip=i;
		for(int j=i+1;j<n;j++)
		{
			if(num[j]<num[mip])mip=j;
		}
		swap(num[i],num[mip]);
	}
	for(int i=0;i<n;i++)cout<<num[i]<<" ";
	return 0;
}

