#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,g,s,b,hasres=0,sum;
	scanf("%d",&a);
	for(int i=2;i<=a;i++)
	{
		sum=0;
		for(int j=i-1;j>=1;j--)
		{
			if(i%j==0)sum+=j;
		}
		if(sum==i)
		{
			printf("%d ",i);
			hasres=1;
		}
	}
	if(!hasres)printf("0");
	return 0;
}