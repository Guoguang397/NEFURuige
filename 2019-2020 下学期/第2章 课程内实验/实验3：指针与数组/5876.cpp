#include <stdio.h>
#include <string.h>

int main()
{
	char line[1000];
	int num,isfs,begin;
	while(gets(line)!=NULL)
	{
		begin=num=isfs=0;
		for(char *p=line;*p!=0;p++)
		{
			if(*p=='-')isfs=begin=1;
			else if(*p>='0'&&*p<='9')
			{
				num=num*10+*p-'0';
				begin=1;
			}
			else if(begin)break;
		}
		if(isfs&&num)printf("-");
		printf("%d\n",num);
	}
	return 0;
}

