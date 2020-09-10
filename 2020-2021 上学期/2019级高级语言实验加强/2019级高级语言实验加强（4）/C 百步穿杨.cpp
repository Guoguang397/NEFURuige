#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	while(b--)
	{
		printf(">+");
		for(int i=0;i<a-2;i++)printf("-");
		printf("+>\n");
	}
	return 0;
}

