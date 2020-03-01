#include <stdio.h>
#include <stdlib.h>

int main()
{
	int max,tmp,maxp;
	while(scanf("%d",&max)!=-1)
	{
		maxp=1;
		for(int i=1;i<5;i++)
		{
			scanf("%d",&tmp);
			if(tmp>max)
			{
				maxp=i+1;
				max=tmp;
			}
		}
		printf("%d\n",maxp);
	}
	return 0;
}
