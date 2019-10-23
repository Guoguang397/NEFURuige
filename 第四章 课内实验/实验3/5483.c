#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a=-1008611,tmp;
	for(int i=0;i<5;i++)
	{
		scanf("%d",&tmp);
		if(tmp>a)a=tmp;
	}
	printf("%d",a);
}