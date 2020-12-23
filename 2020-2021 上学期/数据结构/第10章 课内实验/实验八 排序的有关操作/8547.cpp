#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n=0,num[100],tmp;
	while(cin>>num[n]&&num[n++]);
	n--;
	for(int dk=(n/2)%2?n/2:n/2+1;dk>0;dk-=2)
	{
		for(int i=dk;i<n;i++)
		{
			tmp=num[i];
			int j;
			for(j=i-dk;j>=0&&tmp<num[j];j-=dk)
			{
				num[j+dk]=num[j];
			}
			num[j+dk]=tmp;
		}
	}
	for(int i=0;i<n;i++)cout<<num[i]<<" ";
	return 0;
}

