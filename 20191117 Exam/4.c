#include <stdio.h>

int main()
{
	char c;
	while(1)
	{
		scanf("%c",&c);
		if(c=='#')return 0;
		if(c>='0'&&c<='9')c='*';
		printf("%c",c);
	}
}
