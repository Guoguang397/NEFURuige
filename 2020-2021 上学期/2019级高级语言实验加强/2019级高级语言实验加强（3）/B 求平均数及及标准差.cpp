#include <stdio.h>
#include <math.h>

int main()
{
	int m,n;
	double num[100],ava,dev;
	while(~scanf("%d",&m))
	{
		while(m--)
		{
			scanf("%d",&n);
			dev=ava=0;
			for(int i=0;i<n;i++)
			{
				scanf("%lf",&num[i]);
				ava+=num[i];
			}
			ava/=n;
			for(int i=0;i<n;i++)
			{
				dev+=(num[i]-ava)*(num[i]-ava);
			}
			dev=sqrt(dev/n);
			printf("%.3lf %.3lf\n",ava,dev);
		}
	}
	return 0;
}

