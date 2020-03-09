#include <stdio.h>
#include <math.h>

struct point
{
	int x,y;
}p[100];

int main()
{
	int n;
	double dist=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d %d",&p[i].x,&p[i].y);
	for(int i=0;i<n-1;i++)
	{
		dist+=sqrt((p[i].x-p[i+1].x)*(p[i].x-p[i+1].x)+(p[i].y-p[i+1].y)*(p[i].y-p[i+1].y));
	}
	dist+=sqrt((p[0].x-p[n-1].x)*(p[0].x-p[n-1].x)+(p[0].y-p[n-1].y)*(p[0].y-p[n-1].y));
	printf("hl=%f",dist);
	return 0;
}

