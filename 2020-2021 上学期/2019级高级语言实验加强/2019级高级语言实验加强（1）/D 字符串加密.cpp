#include <stdio.h>

int main()
{
	int enc=1;
	char tmp;
	while(~scanf("%c",&tmp)&&tmp!='\n')
	{
		if(tmp=='@')enc=0;
		if(enc&&tmp>='0'&&tmp<='9')
		{
			tmp-='0';
			tmp=(tmp+3)%10;
			tmp+='0';
		}
		putchar(tmp);
	}
	return 0;
}