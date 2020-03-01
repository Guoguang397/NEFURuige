#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
	{
		if(n%3==0)printf("EVEN\n");
		else printf("ODD\n");
	}
	return 0;
}