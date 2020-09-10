#include <stdio.h>

int main()
{
	int n,c0=0,co=0;
	char c;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf(" %c",&c);
		if(c=='0')c0++;
		else if(c=='O')co++;
	}
	printf("%d %d",c0,co);
	return 0;
}

