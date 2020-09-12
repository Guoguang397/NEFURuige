#include <stdio.h>
#include <math.h>

int main()
{
	int n,x,y,z;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			scanf("%d %d",&x,&y);
			z=pow(x,y);
			z%=1000;
			printf("%d %d %d\n",x,y,z);
		}
	}
	return 0;
}

