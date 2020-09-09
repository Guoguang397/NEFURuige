#include <stdio.h>
#include <string.h>

char* find(char str[100][51],int n)
{
	int cnt,mp=0,mcnt=0;
	for(int i=0;i<n;i++)
	{
		cnt=0;
		for(int j=0;j<strlen(str[i]);j++)
		{
			if(str[i][j]=='*')cnt++;
		}
		if(cnt>mcnt)
		{
			mcnt=cnt;
			mp=i;
		}
	}
	return mcnt==0?NULL:str[mp];
}

int main()
{
	int n;
	char str[100][51];
	while(~scanf("%d",&n))
	{
		for(int i=0;i<n;i++)
		{
			scanf("%s",str[i]);
		}
		printf("%s\n",find(str,n)==NULL?"NULL":find(str,n));
	}
	return 0;
}

