#include <stdio.h>

int main()
{
	int m,n,h=0;
	scanf("%d %d",&m,&n);
	for(int i=m;i<=n;i++)
	{
		if(i%7==0&&i%10%3==0)
		{
			printf("%d ",i);
			h=1;
		}
	}
	if(!h)printf("0");
	return 0;
}
