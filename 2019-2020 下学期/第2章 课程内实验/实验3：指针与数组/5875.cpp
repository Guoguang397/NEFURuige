#include <stdio.h>
#include <string.h>

int main()
{
	int n,x,tmp;
	while(~scanf("%d %d",&n,&x))
	{
		while(n--)
		{
			scanf("%d",&tmp);
			if(tmp>=x)printf("%d ",tmp);
		}
		printf("\n");
	}
	return 0;
}

