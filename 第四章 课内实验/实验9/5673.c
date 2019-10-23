#include <stdio.h>
#include <string.h>

int main()
{
    float a[7],sum;
    int max,maxp,min,minp;
    while(scanf("%f",&a[0])!=EOF)
    {
    	sum=0;
    	min=max=a[0];
    	minp=maxp=0;
    	for(int i=1;i<7;i++)
    	{
    		scanf("%f",&a[i]);
    		if(a[i]>max)
			{
				max=a[i];
				maxp=i;
    		}
    		if(a[i]<min)
			{
				min=a[i];
				minp=i;
    		}
		}
		for(int i=0;i<7;i++)
    	{
    		if(i!=maxp&&i!=minp)sum+=a[i];
		}
		printf("%.2f\n",sum/5);
	}
    return 0;
}