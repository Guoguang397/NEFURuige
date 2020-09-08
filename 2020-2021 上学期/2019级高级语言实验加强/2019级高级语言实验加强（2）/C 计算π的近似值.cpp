#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	double ans,tmp;
	while(~scanf("%d",&n))
	{
		ans=0;
		for(int i=1;i<=n;i++)
		{
			ans+=1.0/(2*i-1)*pow(-1,i+1);
		}
		printf("%lf\n",ans*4);
	}
	return 0;
}