/*
��Ŀ������
ͨ��ָ������ָ��������ֿγ���Ƶѧϰ������ָ������ָ�����ʵ�ֶԺ���f(x)=x^5+4x^3+x+5,
�Լ�f(x)=cos(x)+5sin(x^3) ��������������[1,3]�϶����ֵ���⡣
*/

#include <stdio.h>
#include <math.h>

double F1(double x){return pow(x,5)+4*pow(x,3)+x+5;}
double F2(double x){return cos(x)+5*sin(pow(x,3));}

double calc(double l,double r,double (*func)(double))
{
	double step=1e-6,res=0;
	while(r>l)
	{
		res+=step*func(l);
		l+=step;
	}
	return res;
}

int main()
{
	printf("%.2f\n",calc(1,3,F1));
	printf("%.2f",calc(1,3,F2));
	return 0;
}

/* Failed(�Ҳ�����5sin(x^3)�Ļ��ְ�����)
#include <stdio.h>
#include <math.h>

double F1(double x){return (1.0/6)*pow(x,6)+pow(x,4)+(1.0/2)*pow(x,2)+5*x;}
double F2(double x){return ????????;}

double calc(int l,int r,double (*func)(double))
{
	return func(r)-func(l);
}

int main()
{
	printf("%.2f\n",calc(1,3,F1));
	printf("%.2f",calc(1,3,F2));
	return 0;
}*/
