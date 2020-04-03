#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort1(char **pp,int n)
{
	char *temp;
	//补充完成程序
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(strcmp(pp[j],pp[j+1])>0)
			{
				temp=pp[j];
				pp[j]=pp[j+1];
				pp[j+1]=temp;
			}
		}
	}
}
void output1(char *p[],int n)
{
	//补充完成程序
	for(int i=0;i<n;i++)
	{
		puts(p[i]);
	}
}
int main()
{
	void sort1(char **pp,int n);
	void output1(char *p[],int n);
	char str[50],*cp[20];
	int n,l,i;
	while(scanf("%d\n",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			gets(str);
			//start
			//在此写动态开辟并存储程序
			cp[i]=(char *)malloc(strlen(str)+1);
			strcpy(cp[i],str);
			//end
		}
		sort1(cp,n);
		output1(cp,n);
	}
	return 0;
}
