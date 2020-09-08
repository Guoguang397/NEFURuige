#include <stdio.h>
#include <math.h>

int isss(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)return 0;
	}
	return 1;
}

int main()
{
	int n,ans,t;
	while(~scanf("%d",&n))
	{
		ans=0;
		while(n--)
		{
			scanf("%d",&t);
			if(!isss(t))ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}