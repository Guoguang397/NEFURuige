#include <stdio.h>
#include <string.h>

int main()
{
	int l,r;
	char str[101];
	while(~scanf("%s %d %d",str,&l,&r))
	{
		for(int i=l-1;i<r;i++)
		{
			printf("%c",str[i]);
		}
		printf("\n");
	}
	return 0;
}

