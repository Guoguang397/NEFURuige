#include <stdio.h>
#include <string.h>

int main()
{
    int pos=0;
	char ch[11]={0},c;
	while(~scanf("%c",&c))
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		{
			ch[pos++]=c;
		}
		else
		{
            if(strlen(ch)==0)continue;
			printf("%s\n",ch);
			memset(ch,0,sizeof(ch));
			pos=0;
		}
	}
    return 0;
}

