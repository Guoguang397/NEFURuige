/*
��Ŀ������
��д������ɽ�һ����ά�����������쳣�����ҳ�ת����뵽һ��һά�����С��쳣�����Ǹ���λ�ϵ����ֺ���ż���������������������������13,13������������1+3=4��ż����

Ҫ�����й�����ָ����ɡ�

��ʾ�����ʹ���Զ��庯��
*/
#include <stdio.h>
#include <string.h>
const int N=5;

int check(int *num)
{
	if(*num%2==0)return 0;
	int n=*num,sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	if(sum%2==0)return 1;
	else return 0;
}

int main()
{
	int num[N][N],err[N*N],*ep=err,(*np)[N]=num;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			scanf("%d",*(np+i)+j);
			if(check(*(np+i)+j))
			{
				*ep=*(*(np+i)+j);
				ep++;
			}
		}
	}
	for(int *p=err;p<ep;p++)
	{
		printf("%d ",*p);
	}
	return 0;
}
