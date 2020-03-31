/*
题目描述：
利用动态内容分配编写程序完成对10个int类型数据的输入和输出
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *num[10];
	for(int i=0;i<10;i++)
	{
		num[i]=(int*)calloc(1,4);
		scanf("%d",num[i]);
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",*num[i]);
	}
	return 0;
}
