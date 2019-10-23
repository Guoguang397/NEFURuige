#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100],s2[100];
	int res;
	while(scanf("%s %s",&s1,&s2)!=EOF)
	{
		if(strcmp(s1,s2)==0)res=0;
		else if(strcmp(s1,s2)<0)res=-1;
		else res=1;
		printf("%d\n",res);
	}
    return 0;
}
