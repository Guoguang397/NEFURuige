/*
��Ŀ������
����һ�����5��ѧ��2�ſγɼ��Ķ�ά����float score[5][2],��д����ʵ�ֽ��ܷ���ߵ�ͬѧ��2�ſγɼ������ܷ������
Ҫ����main��������ɳɼ������룬��дһ������ָ��ֵ�ĺ�����ʵ�ֶ��ܷ���ߵ�ͬѧ�Ĳ��ң������main��������ɵ��ú������Խ���������
*/
#include <stdio.h>

float* find(int n,float score[][2])
{
	int sum,max;
	float *maxp;
	for(int i=0;i<n;i++)
	{
		sum=score[i][0]+score[i][1];
		if(sum>max)
		{
			max=sum;
			maxp=score[i];
		}
	}
	return maxp;
}

int main()
{
	float score[5][2],*ans;
	for(int i=0;i<5;i++)scanf("%f %f",&score[i][0],&score[i][1]);
	ans=find(5,score);
	printf("%.2f %.2f\nsum=%.2f",*ans,*(ans+1),*ans+*(ans+1));
	return 0;
}
