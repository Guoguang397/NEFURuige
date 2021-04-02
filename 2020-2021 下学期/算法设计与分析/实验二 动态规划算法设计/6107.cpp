#include <bits/stdc++.h>
using namespace std;

const int UP=1;
const int LEFT=2;
const int LEFTUP=3;
int m,n,dp[100][100]={0},pos[100][100]={0};
string s1,s2;

void printAns(int x,int y)
{
	//printf("(%d,%d)=%d\n",x,y,pos[x][y]);
	if(!(x&&y))return;
	if(pos[x][y]==LEFTUP)
	{
		printAns(x-1,y-1);
		cout<<s1[x-1];
	}
	else if(pos[x][y]==UP)printAns(x-1,y);
	else printAns(x,y-1);
}

int main()
{
	cin>>m>>n;
	cin>>s1>>s2;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			int x=i+1,y=j+1;
			if(s2[j]==s1[i])
			{
				pos[x][y]=LEFTUP;
				dp[x][y]=dp[i][j]+1;
			}
			else
			{
				if(dp[i][y]>dp[x][y])
				{
					dp[x][y]=dp[i][y];
					pos[x][y]=UP;
				}
				if(dp[x][j]>dp[x][y])
				{
					dp[x][y]=dp[x][j];
					pos[x][y]=LEFT;
				}
				
			}
			//printf("(%d,%d) -> dp=%d pos=%d\n",x,y,dp[x][y],pos[x][y]);
		}
	}
	printAns(m,n);
	return 0;
}

