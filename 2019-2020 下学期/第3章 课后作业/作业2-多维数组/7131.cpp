#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<j)printf("%d ",i>n-1-j?n-j:i+1);
			else printf("%d ",j>n-1-i?n-i:j+1);
		}
		printf("\n");
	}
	return 0;
}

