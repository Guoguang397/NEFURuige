#include <stdio.h>
#include <string.h>

int main()
{
    int n=1;
    char ch[20];
    scanf("%s",&ch);
    for(int i=0;i<strlen(ch);i++)
    {
    	if(ch[i]=='/')
    	{
    		n=!n;
    		continue;
		}
    	if(n)printf("%c",ch[i]);
	}
    return 0;
}
