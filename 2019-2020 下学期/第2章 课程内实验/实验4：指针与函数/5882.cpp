#include <stdio.h>
#include <string.h>

char* findmax(char (*words)[51],int n)
{
	char *maxp;
	int num=0,max=0;
	for(int i=0;i<n;i++)
	{
		num=0;
		for(int j=0;j<strlen(*(words+i));j++)
		{
			if(*(*(words+i)+j)=='*')num++;
		}
		if(num>max)
		{
			maxp=*(words+i);
			max=num;
		}
	}
	return maxp;
}

int main()
{
	int n,num;
	char words[101][51];
	while(~scanf("%d",&n))
	{
		for(int i=0;i<n;i++)
		{
			scanf("%s",words[i]);
		}
		printf("%s\n",findmax(words,n));
	}
	return 0;
}

