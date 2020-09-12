#include <stdio.h>
#include <math.h>

int main()
{
	int n,t,sj=0,so=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&t);
		if(t%2==0)so+=t;
		else sj+=t;
	}
	printf("%d\n%d",sj,so);
	return 0;
}

