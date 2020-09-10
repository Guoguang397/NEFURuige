#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n%11==0)printf("%d",n%8);
	else printf("%d",n%7);
	return 0;
}

