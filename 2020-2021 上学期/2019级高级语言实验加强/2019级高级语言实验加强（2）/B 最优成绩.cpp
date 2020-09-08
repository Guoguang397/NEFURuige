#include <stdio.h>

int main()
{
	int n,ans;
	double a[100],t;
	while(~scanf("%d",&n))
	{
		ans=0;
		for(int i=0;i<n;i++)
		{
			scanf("%lf",&a[i]);
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(a[j]<a[j+1])
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
		}
		printf("%.2lf\n",(a[0]+a[1]+a[2])/3);
	}
	return 0;
}