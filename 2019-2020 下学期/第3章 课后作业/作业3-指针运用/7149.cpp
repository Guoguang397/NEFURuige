#include <stdio.h>
#include <string.h>

int main()
{
	int n,num[100];
	int max,min,minp=0,maxp=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&num[i]);
	max=min=num[0];
	for(int i=0;i<n;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
			maxp=i;
		}
		if(num[i]<min)
		{
			min=num[i];
			minp=i;
		}
	}
	printf("%d %d\n%d %d",max,maxp+1,min,minp+1);
	return 0;
}

