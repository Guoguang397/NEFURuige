#include <stdio.h>
#include <string.h>

int find(char dist[],char tar[])
{
	int p1=0,p2=0;
	while(dist[p1]!='\0')
	{
		if(dist[p1]==tar[p2])
		{
			p2++;
			if(tar[p2]=='\0')return 1;
		}
		else
		{
			p1-=p2;
			p2=0;
		}
		p1++;
	}
	return 0;
}

int main()
{
	char str[100];
	while(~scanf("%s",str))
	{
		if(find(str,"GOODLUCK"))printf("Yes!\n");
		else printf("No!\n");
	}
	return 0;
}


