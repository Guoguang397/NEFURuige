#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char *p[],int n)
{
	char *tmp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(strcmp(p[j],p[j+1])>0)
			{
				tmp=p[j];
				p[j]=p[j+1];
				p[j+1]=tmp;
			}
		}
	}
}

int main()
{
	int n;
	char word[100],*p[100];
	while(~scanf("%d",&n))
	{
		for(int i=0;i<n;i++)
		{
			scanf("%s",word);
			p[i]=(char*)malloc((strlen(word)+1)*sizeof(char));
			strcpy(p[i],word);
		}
		sort(p,n);
		for(int i=0;i<n;i++)
		{
			printf("%s\n",p[i]);
		}
	}
	return 0;
}

