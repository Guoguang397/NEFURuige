#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,g,s,b,hasres=0;
	scanf("%d",&a);
	for(int i=100;i<=a;i++)
	{
		b=i/100;
		s=i%100/10;
		g=i%10;
		if(b*b*b+s*s*s+g*g*g==i)
		{
			printf("%d ",i);
			hasres=1;
		}
	}
	if(!hasres)printf("0");
	return 0;
}