/*
��Ŀ������
���ö�̬�ڴ������ɸ���һ���ÿո�ָ���Ӣ�ĵĵ��ʷָ���Ҫ��ֳ��ĵ����ö�̬����洢�ռ�洢������ָ������ָ��
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
