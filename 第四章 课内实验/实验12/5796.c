#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100],s2[100];
	int res;
	while(scanf("%s %s",&s1,&s2)!=EOF)
	{
		strcat(s1,s2);
		printf("%s\n",s1);
	}
    return 0;
}
