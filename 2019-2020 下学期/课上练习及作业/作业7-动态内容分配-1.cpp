/*
��Ŀ������
���ö�̬���ݷ����д������ɶ�10��int�������ݵ���������
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
