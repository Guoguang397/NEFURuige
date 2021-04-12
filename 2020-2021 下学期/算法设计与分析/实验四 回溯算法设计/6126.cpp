#include <bits/stdc++.h>
using namespace std;

int n,mp[100][100],vis[100],ans=0x7FFFFFFF;
int p[100],pp=0;
string anss;

void dfs(int x,int cost,int cnt)
{
	if(cnt==n-1)
	{
		if(mp[x][0]!=-1&&cost+mp[x][0]<ans)
		{
			ans=cost+mp[x][0];
			anss="1";
			for(int i=0;i<n-1;i++)
			{
				anss+=" "+to_string(p[i]+1);
			}
		}
		return;
	}
	for(int i=1;i<n;i++)
	{
		if(vis[i]||mp[x][i]==-1)continue;
		vis[i]=1;
		p[pp++]=i;
		dfs(i,cost+mp[x][i],cnt+1);
		pp--;
		vis[i]=0;
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>mp[i][j];
	dfs(0,0,0);
	cout<<ans<<endl<<anss;
	return 0;
}

