#include <stdio.h>
#include <string.h>

int main()
{
	int n,min,max,x;
	while(~scanf("%d %d %d",&n,&min,&max))
	{
		while(n--)
		{
			scanf("%d",&x);
			if(x>=min&&x<=max)
			{
				printf("1 %d\n",x);
				break;
			}
		}
		if(n==-1)printf("0 %d\n",x);
	}
	return 0;
}

