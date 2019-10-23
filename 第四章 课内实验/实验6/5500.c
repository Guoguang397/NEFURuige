#include <stdio.h>
#include <stdlib.h>

int gt(int a)
{
    int res=1;
	for(int i=2;i<=a;i++)
	{
		res*=i;
	}
	return res;
}

int main()
{
    int a;
    double e;
    while(scanf("%d",&a)!=EOF)
    {
    	e=0;
    	for(int i=0;i<a;i++)
    	{
    		e+=1.0/gt(i);
		}
		printf("%.4f\n",e);
	}
	return 0;
}