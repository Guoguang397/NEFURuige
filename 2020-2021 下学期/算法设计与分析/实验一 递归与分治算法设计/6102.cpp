#include <bits/stdc++.h>
using namespace std;

int n,x,y,mp[100][100]={0},tgpid=1;

bool inBoard(int cx,int cy,int csize,int px,int py)
{
	if(px>=cx&&px<=cx+csize-1&&py>=cy&&py<=cy+csize-1)return true;
	return false;
}

void split(int cx,int cy,int csize,int spx,int spy)
{
	if(csize==1)return;
	int hcsize=csize/2;
	int edgeLUx=cx+hcsize-1,edgeLUy=cy+hcsize-1;
	int gpid=tgpid++;

	if(inBoard(cx,cy,hcsize,spx,spy))split(cx,cy,hcsize,spx,spy);
	else
	{
		mp[edgeLUx][edgeLUy]=gpid;
		split(cx,cy,hcsize,edgeLUx,edgeLUy);
	}
	if(inBoard(cx,cy+hcsize,hcsize,spx,spy))split(cx,cy+hcsize,hcsize,spx,spy);
	else
	{
		mp[edgeLUx][edgeLUy+1]=gpid;
		split(cx,cy+hcsize,hcsize,edgeLUx,edgeLUy+1);
	}
	if(inBoard(cx+hcsize,cy,hcsize,spx,spy))split(cx+hcsize,cy,hcsize,spx,spy);
	else
	{
		mp[edgeLUx+1][edgeLUy]=gpid;
		split(cx+hcsize,cy,hcsize,edgeLUx+1,edgeLUy);
	}
	if(inBoard(cx+hcsize,cy+hcsize,hcsize,spx,spy))split(cx+hcsize,cy+hcsize,hcsize,spx,spy);
	else
	{
		mp[edgeLUx+1][edgeLUy+1]=gpid;
		split(cx+hcsize,cy+hcsize,hcsize,edgeLUx+1,edgeLUy+1);
	}
}

int main()
{
	cin>>n>>x>>y;
	x--;
	y--;
	mp[x][y]=0;
	split(0,0,n,x,y);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%2d ",mp[i][j]);
		}
		cout<<"\n";
	}
	return 0;
}

