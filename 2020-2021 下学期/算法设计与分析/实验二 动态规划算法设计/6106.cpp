#include <bits/stdc++.h>
using namespace std;

const int UP=1;
const int LEFT=2;
const int LEFTUP=3;
int n,a[100][100],dp[100][100],mx,my;

void findAns(int x,int y)
{
	if(x>0)
	{
		if(y==0)findAns(x-1,y);
		else findAns(x-1,dp[x-1][y-1]>dp[x-1][y]?y-1:y);
	}
	printf("%d ",a[x][y]);
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int npr=i+1;
		for(int j=0;j<npr;j++)
		{
			cin>>a[i][j];
			int ma=i==0?0:j==0?dp[i-1][j]:max(dp[i-1][j],dp[i-1][j-1]);
			dp[i][j]=ma+a[i][j];
			//cout<<dp[i][j]<<endl;
			if(dp[i][j]>dp[mx][my])mx=i,my=j;
		}
	}
	cout<<dp[mx][my]<<endl;
	findAns(mx,my);
	return 0;
}

