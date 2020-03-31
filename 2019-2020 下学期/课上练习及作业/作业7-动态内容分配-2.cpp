/*
题目描述：
利用动态内存分配完成给定一段用空格分隔的英文的单词分隔。要求分出的单词用动态分配存储空间存储，并用指针数组指向
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *words[10],word[20];
	int n=0;
	while(~scanf("%s",word))
	{
		words[n]=(char*)calloc(strlen(word)+1,1);
		strcpy(words[n],word);
		n++;
	}
	for(int i=0;i<n;i++)
	{
		printf("%s ",words[i]);
	}
	return 0;
}
