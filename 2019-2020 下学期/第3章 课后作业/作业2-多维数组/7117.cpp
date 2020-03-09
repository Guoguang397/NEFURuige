#include <stdio.h>
#include <string.h>

int main()
{
	int n,map[10][10],cnt=1,x,y;
	scanf("%d",&n);
	x=0;y=n-1;
	while(cnt<=n*n)
	{
		map[x][y]=cnt++;
		if(x+1<n&&y+1<n)x++,y++;
		else if(x+1>=n)
		{
			x=n-y;
			y=0;
		}
		else
		{
			y=n/2-x;
			if(n%2)y++;
			x=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)printf("%-2d ",map[i][j]);
		printf("\n");
	}
	return 0;
}

