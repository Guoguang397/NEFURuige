#include <stdio.h>
#include <string.h>
int main()
{
    int n,l1=1,l2=1,l3;
	while(scanf("%d",&n)!=EOF)
	{
		l1=l2=1;
		for(int i=3;i<=n;i++)
		{
			l3=l2+l1;
			l1=l2;
			l2=l3;
		}
		printf("%d\n",l3);
	}
    return 0;
}
