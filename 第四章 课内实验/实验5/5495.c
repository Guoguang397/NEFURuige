#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int issushu(int a)
{
    for(int i=sqrt(a);i>=2;i--)
	{
		if(a%i==0)return 0;
	}
	return 1;
}

int main()
{
	int a,sum;
	while(scanf("%d",&a)!=EOF)
	{
		sum=0;
		for(int i=2;i<=a;i++)
		{
			if(issushu(i))sum+=i;
		}
		printf("%d\n",sum);
	}
	return 0;
}

