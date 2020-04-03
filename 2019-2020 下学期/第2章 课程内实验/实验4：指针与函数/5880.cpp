#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	double score[20][4],sum[3]={0};
    while(~scanf("%d",&n))
	{
    	for(int i=0;i<n;i++)
    	{
    		score[i][3]=0;
    		for(int j=0;j<3;j++)
    		{
    			scanf("%lf",&score[i][j]);
    			score[i][3]+=score[i][j];
    			sum[j]+=score[i][j];
			}
		}
		for(int i=0;i<n;i++)
    	{
    		printf("%.2f %.2f\n",score[i][3],score[i][3]/3);
		}
		for(int i=0;i<3;i++)
    	{
    		printf("%.2f %.2f\n",sum[i],sum[i]/n);
		}
	}
	return 0;
}

