#include <stdio.h>

int main()
{
    char ch,e=0,n=0,s=0,o=0;
    scanf("%c",&ch);
    while(ch!='.')
	{
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')e++;
		else if(ch>='0'&&ch<='9')n++;
		else if(ch==' ')s++;
		else o++;
		scanf("%c",&ch);
	}
	printf("%d %d %d %d",e,n,s,o);
	return 0;
}