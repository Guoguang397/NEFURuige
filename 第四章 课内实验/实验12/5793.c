#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
	while(scanf("%s",&ch)!=EOF)
	{
		printf("%d\n",strlen(ch));
	}
    return 0;
}
