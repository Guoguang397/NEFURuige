#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
	char tmp;
	while(scanf("%c",&tmp)!=-1)
	{
		if(tmp=='7')num++;
		if(num>=3)
		{
			printf("good luck!");
			return 0;
		}
	}
	printf("%d",num);
	return 0;
}