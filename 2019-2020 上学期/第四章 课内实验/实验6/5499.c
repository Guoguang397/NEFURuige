#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,fm,j;
    double p;
    while(scanf("%d",&a)!=EOF)
    {
        j=1;
    	p=4;
    	for(int i=3;i<=1+2*(a-1);i+=2)
    	{
    		if(j)p-=4.0/i;
    		else p+=4.0/i;
    		j=!j;
		}
		printf("%.10f\n",p);
	}
	return 0;
}