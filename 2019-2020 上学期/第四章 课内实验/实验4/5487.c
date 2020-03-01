#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,res=0,b,n=1;
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		a/=10;
		res+=b*n;
		n*=2;
	}
	printf("%d",res);
}
