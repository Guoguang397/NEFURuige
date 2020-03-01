#include <stdio.h>

int main()
{
    int a,b,res=0;
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		a/=10;
		res=res*10+b;
	}
	printf("%d",res);
	return 0;
}