#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int pp=0;
	char *p[501],word[1000];
	while(~scanf("%s",word))
	{
		p[pp]=(char *)malloc(strlen(word));
		strcpy(p[pp],word);
		pp++;
	}
	printf("%d\n",pp);
	for(int i=0;i<pp;i++)
	{
		puts(p[i]);
	}
    return 0;
}

