#include <stdio.h>

double y(double x)
{
	return (-x)*x-2*x+49;
}

int main()
{
	int n;
	double ans,tmp;
	while(~scanf("%d",&n))
	{
		ans=0;
		while(n--)
		{
			scanf("%lf",&tmp);
			ans+=y(tmp);
		}
		printf("%.2lf\n",ans);
	}
	return 0;
}

