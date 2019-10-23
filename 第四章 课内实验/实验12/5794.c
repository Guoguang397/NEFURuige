#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100],des[13]="After Copy:",res[100];
	while(scanf("%s",&ch)!=EOF)
	{
		memset(res,0,sizeof(res));
		memcpy(res,des,strlen(des));
		strcat(res,ch);
		printf("%s\n",res);
	}
    return 0;
}
