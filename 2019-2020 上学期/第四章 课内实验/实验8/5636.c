#include <stdio.h>
#include <string.h>

int main()
{
    int a,b,max,p;
    while(scanf("%d",&a)!=EOF)
    {
        max=0;
    	for(int i=0;i<a;i++)
    	{
    		scanf("%d",&b);
    		if(b>max)
			{
				max=b;
				p=i;
    		}
		}
		printf("%d %d\n",max,p);
	}
    return 0;
}