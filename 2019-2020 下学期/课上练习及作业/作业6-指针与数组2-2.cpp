/*
题目描述：
利用指向字符的指针重新实现人名中找出含有“LI”、“li”、“Li”、“lI”的程序。
*/
#include <stdio.h>
#include <string.h>

int main()
{
	char name[34][20],(*p)[20]=name;
	for(int i=0;i<34;i++)scanf("%s",*(p+i));
	for(int i=0;i<34;i++)
	{
		for(int j=0;j<strlen(name[i])-1;j++)
		{
			if((*(*(p+i)+j)=='l'||*(*(p+i)+j)=='L')&&(*(*(p+i)+j+1)=='i'||*(*(p+i)+j+1)=='I'))puts(*(p+i));
		}
	}
	return 0;
}
