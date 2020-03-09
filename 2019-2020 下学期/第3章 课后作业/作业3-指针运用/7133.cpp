#include <stdio.h>
#include <string.h>

int db(int p[],int n)
{
	int max=p[0],min=p[0],minp=0,maxp=0;
	for(int i=0;i<n;i++)
	{
		if(p[i]>max)
		{
			max=p[i];
			maxp=i;
		}
		if(p[i]<min)
		{
			min=p[i];
			minp=i;
		}
	}
	p[minp]=max;
	p[maxp]=min;
}

int main()
{
	int n,num[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&num[i]);
	db(num,n);
	for(int i=0;i<n;i++)printf("%d ",num[i]);
	return 0;
}

