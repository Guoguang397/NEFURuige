#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100],max[100];
    while(scanf("%s",&ch)!=EOF)
    {
        if(strlen(ch)>strlen(max))strcpy(max,ch);
	}
	printf("%s",max);
	return 0;
}