#include <stdio.h>
#include <string.h>

int main()
{
    char ch[10];
	int ok;
    while(scanf("%s",&ch)!=EOF)
    {
    	ok=1;
    	for(int i=0,j=strlen(ch)-1;i<j;i++,j--)
    	{
    		if(ch[i]!=ch[j])
    		{
    			printf("0\n");
    			ok=0;
    			break;
			}
		}
		if(ok)printf("1\n");
	}
    return 0;
}