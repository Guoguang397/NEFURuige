#include <stdio.h>
#include <string.h>

int main()
{
    int a,b[10],max,maxp,min,minp;
    while(scanf("%d",&b[0])!=EOF)
    {
        min=max=b[0];
    	minp=maxp=0;
    	for(int i=1;i<10;i++)
    	{
    		scanf("%d",&b[i]);
    		if(b[i]>max)
			{
				max=b[i];
				maxp=i;
    		}
    		if(b[i]<min)
			{
				min=b[i];
				minp=i;
    		}
		}
		b[maxp]+=b[minp];
		b[minp]=b[maxp]-b[minp];
		b[maxp]-=b[minp];
		for(int i=0;i<10;i++)
    	{
    		printf("%d ",b[i]);
		}
		printf("\n");
	}
    return 0;
}