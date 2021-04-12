#include <bits/stdc++.h>
using namespace std;

int c,n,w[100],v[100],dp[100][100],mv;

void getObj(int x,int y)
{
	if(x==0)printf(dp[x][y]?"1 ":"0 ");
	if(x-1>=0&&dp[x][y]==dp[x-1][y])
	{
		getObj(x-1,y);
		printf("0 ");
	}
	else if(x>=0&&y-1>=0&&dp[x][y]==dp[x][y-1])getObj(x,y-1);
	else if(x-1>=0&&y-w[x]>=0)
	{
		getObj(x-1,y-w[x]);
		printf("1 ");
	}
}

int main()
{
	cin>>c>>n;
	for(int i=0;i<n;i++)cin>>w[i];
	for(int i=0;i<n;i++)cin>>v[i];
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(i==0)dp[i][j]=j>=w[i]?v[i]:0;
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				if(j>=w[i])dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
			}
		}
	}
	cout<<dp[n-1][c]<<endl;
	getObj(n-1,c);
	return 0;
}

