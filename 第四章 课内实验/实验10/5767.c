#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100],ori,re;
    while(scanf("%s",&ch)!=EOF)
    {
        scanf(" %c %c",&ori,&re);
		for(int i=0;i<strlen(ch);i++)
    	{
    		if(ori==ch[i])
    		{
    			printf("%c",re);
			}
			else
			{
				printf("%c",ch[i]);
			}
		}
		printf("\n");
	}
}