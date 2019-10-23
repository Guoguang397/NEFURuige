#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[4];
	scanf("%s",a);
	for(int i=0;i<4;i++)
	{
		a[i]-='0';
		a[i]+=3;
		a[i]%=10;
	}
	for(int i=3;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}