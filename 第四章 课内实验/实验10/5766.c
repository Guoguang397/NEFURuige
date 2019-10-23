#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100],in;
    while(scanf("%s",&ch)!=EOF)
    {
        scanf(" %c",&in);
    	if(in<ch[0])
    	{
    		printf("%c",in);
		}
		for(int i=0;i<strlen(ch);i++)
    	{
    		printf("%c",ch[i]);
    		if(in>ch[i]&&in<ch[i+1])
    		{
    			printf("%c",in);
			}
		}
		printf("\n");
	}
}