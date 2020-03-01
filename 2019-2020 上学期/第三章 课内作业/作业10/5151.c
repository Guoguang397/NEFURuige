#include <stdio.h>
#include <stdlib.h>
// A normal method
int main()
{
    int a[5],p,res=1,tmp;
	while(scanf("%d",&p)!=-1)
	{
		for(int i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
		
		for(int i=0;i<5-p;i++)
		{
			tmp=a[4];
			for(int j=4;j>0;j--)
			{
				a[j]=a[j-1];
			}
			a[0]=tmp;
		}
		
		for(int i=0;i<5;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}
    
}

/* A lazy method :)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],p;
	
	while(scanf("%d",&p)!=-1)
	{
		for(int i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
		
		for(int i=p;i<5;i++)
		{
			printf("%d ",a[i]);
		}
		
		for(int i=0;i<p;i++)
		{
			printf("%d ",a[i]);
		}
		
		printf("\n");
	}
}*/