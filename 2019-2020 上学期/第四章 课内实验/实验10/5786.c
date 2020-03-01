#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100],del;
    int add; 
    while(scanf("%s",&ch)!=EOF)
    {
        scanf(" %c %d",&del,&add);
    	for(int i=0;i<strlen(ch);i++)
    	{
    		if(del!=ch[i])
    		{
    			if(ch[i]>='a'&&ch[i]<='z')ch[i]=(ch[i]-'a'+add)%26+'a';
    			printf("%c",ch[i]);
			}
		}
		printf("\n");
	}
}