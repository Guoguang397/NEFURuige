/*
��Ŀ������
��дһ���������书���ǶԴ��͹��������������������ֵ���ֵ����ͨ���βδ��ͻص��ú�����
*/
#include <stdio.h>
#include <string.h>

void calc(double a,double b,double *c,double *d)
{
	*c=a+b;
	*d=a-b;
} 

int main()
{
	double a,b,c,d;
	scanf("%lf %lf",&a,&b);
	calc(a,b,&c,&d);
	printf("%f %f",c,d);
	return 0;
}
