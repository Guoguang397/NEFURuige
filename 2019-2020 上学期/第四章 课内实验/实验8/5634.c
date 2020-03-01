#include <stdio.h>
#include <string.h>

int main()
{
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
    	for(int i=0;i<a;i++)
    	{
    		scanf("%d",&b);
    		for(int j=0;j<b;j++)
    		{
    			printf("*");
			}
			printf("\n");
		}
	}
    return 0;
}