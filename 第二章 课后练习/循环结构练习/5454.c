#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
	int d,x,s,z;
	while(scanf("%s",&ch)!=EOF)
	{
		d=x=s=z=0;
		if(strlen(ch)<8||strlen(ch)>16)
		{
			printf("NO\n");
			continue;
		}
		for(int i=0;i<strlen(ch);i++)
		{
			if(ch[i]>='a'&&ch[i]<='z')x++;
			if(ch[i]>='0'&&ch[i]<='9')s++;
			if(ch[i]>='A'&&ch[i]<='Z')d++;
			if(ch[i]=='!'||ch[i]=='#'||ch[i]=='~'||ch[i]=='￥'||ch[i]=='%'||ch[i]=='^')z++;
		}
		if(d>0&&x>0&&s>0&&z>0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		memset(ch,0,sizeof(ch));
	}
	return 0;
}