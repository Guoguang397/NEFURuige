#include <stdio.h>
#include <string.h>

int main()
{
	double num,tmp;
	int n,ok;
	while(~scanf("%d",&n))
	{
		ok=0;
		scanf("%lf",&num);
		while(n--)
		{
			scanf("%lf",&tmp);
			if(tmp>num&&!ok)
			{
				printf("%.2f ",num);
				ok=1;
			}
			printf("%.2f ",tmp);
		}
		if(!ok)printf("%.2f ",num);
	}
	return 0;
}

