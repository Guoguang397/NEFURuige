#include <stdio.h>
#include <string.h>

int main()
{
	int cnt;
	char s[101];
	while(~scanf("%s",s))
	{
		cnt=0;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]=='*')cnt++;
		}
		printf("%d ",cnt);
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]!='*')putchar(s[i]);
		}
		printf("\n");
	}
	return 0;
}

