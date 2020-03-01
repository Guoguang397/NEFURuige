#include <stdio.h>
#include <stdlib.h>

int ss(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)return 0;
	}
	return 1;
}

int main()
{
	int n,sum;
	while(scanf("%d",&n)!=-1)
	{
		sum=0;
		for(int i=2;i<=n;i++)
		{
			if(n%i==0&&ss(i))sum+=i;
		}
		printf("%d\n",sum);
	}
	return 0;
}
