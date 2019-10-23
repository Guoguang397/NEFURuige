#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,res=0;
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		if(n%i==0)res+=i;
	}
	printf("%d",res);
	return 0;
}