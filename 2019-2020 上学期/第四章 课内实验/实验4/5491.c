#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		printf("*");
	}
	printf("\n");
	for(int i=0;i<a-2;i++)
	{
		printf("*");
		for(int i=0;i<a-2;i++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for(int i=0;i<a;i++)
	{
		printf("*");
	}
	return 0;
}