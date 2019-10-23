#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[5],p,res=1;
	memset(a,0,sizeof(a));
	res = scanf("%d",&p);
	
	while(res!=-1)
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
		memset(a,0,sizeof(a));
		res = scanf("%d",&p);
	}
    
}