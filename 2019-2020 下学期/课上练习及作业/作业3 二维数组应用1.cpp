/*
��Ŀ˵����
��д�������34λͬѧ7�ſγɼ��ĸ��ſ�ƽ��ֵ�����뵽������������
*/

#include <stdio.h>

int main()
{
	double score[35][7],sum[7]={0};
	for(int i=0;i<34;i++)
	{
		for(int j=0;j<7;j++)
		{
			scanf("%lf",&score[i][j]);
			sum[j]+=score[i][j];
		}
	}
	for(int i=0;i<7;i++)
	{
		score[34][i]=sum[i]/34;
		printf("%.2f ",score[34][i]);
	}
	return 0;
}

