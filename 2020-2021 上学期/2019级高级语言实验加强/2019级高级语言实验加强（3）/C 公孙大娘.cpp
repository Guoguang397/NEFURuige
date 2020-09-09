#include <stdio.h>
#include <limits.h>
#include <math.h>

int isss(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)return 0;
	}
	return 1;
}

int main()
{
	int tmp,ma,mi;
	while(~scanf("%d",&tmp))
	{
		ma=INT_MIN;
		mi=INT_MAX;
		if(isss(tmp)&&tmp>ma)ma=tmp;
		if(isss(tmp)&&tmp<mi)mi=tmp;
		for(int i=1;i<9;i++)
		{
			scanf("%d",&tmp);
			if(isss(tmp)&&tmp>ma)ma=tmp;
			if(isss(tmp)&&tmp<mi)mi=tmp;
		}
		printf("%d\n",ma+mi);
	}
	return 0;
}

