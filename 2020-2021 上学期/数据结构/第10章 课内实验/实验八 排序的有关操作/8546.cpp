#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n=0,num[100],swaped;
	while(cin>>num[n]&&num[n++]);
	n--;
	for(int i=0;i<n-1;i++)
	{
		swaped=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(num[j]>num[j+1])
			{
				swap(num[j],num[j+1]);
				swaped=1;
			}
		}
		if(!swaped)break;
	}
	for(int i=0;i<n;i++)cout<<num[i]<<" ";
	return 0;
}

