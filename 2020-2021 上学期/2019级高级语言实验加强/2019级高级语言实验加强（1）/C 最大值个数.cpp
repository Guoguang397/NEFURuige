#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,ans,bucket[101],tmp;
	while(cin>>n)
	{
		memset(bucket,0,sizeof(bucket));
		ans=0;
		while(n--)
		{
			cin>>tmp;
			bucket[tmp]++;
		}
		for(int i=100;i>=0;i--)
		{
			if(bucket[i])
			{
				cout<<i<<" "<<bucket[i]<<endl;
				break;
			}
		}
	}
	return 0;
}