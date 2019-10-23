#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[10];
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n+1;i++)
    	{
    		scanf("%f",&a[i]);
		}
		int ok=0;
		while(!ok)
		{
			ok=1;
			for(int i=0;i<n+1;i++)
			{
				if(a[i]<a[i+1])
				{
					a[i]+=a[i+1];
					a[i+1]=a[i]-a[i+1];
					a[i]-=a[i+1];
					ok = 0;
				}
			}
		}
		for(int i=n;i>0;i--)
    	{
    		printf("%.1f ",a[i]);
		}
		printf("%.1f\n",a[0]);
		memset(a,0,sizeof(a));
	}
}