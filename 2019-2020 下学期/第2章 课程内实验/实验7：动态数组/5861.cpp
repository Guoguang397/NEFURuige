#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n,m,cnt,pp,rm;
	double *px,*py,ans;
	while(~scanf("%d",&n))
	{
		ans=1e300;
		px=(double *)malloc(n*sizeof(double));
		py=(double *)malloc(n*sizeof(double));
		for(int i=0;i<n;i++)
		{
			scanf("%lf %lf",px+i,py+i);
			for(int j=i-1;j>=0;j--)
			{
				if(sqrt((*(px+i)-*(px+j))*(*(px+i)-*(px+j))+(*(py+i)-*(py+j))*(*(py+i)-*(py+j)))<ans)
				{
					ans=sqrt((*(px+i)-*(px+j))*(*(px+i)-*(px+j))+(*(py+i)-*(py+j))*(*(py+i)-*(py+j)));
				}
			}
		}
		printf("%.1f\n",ans);
		free(px);
		free(py);
	}
	
	return 0;
}

