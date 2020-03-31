/*
题目描述：
编写一个函数，其功能是对传送过来的两个浮点数求出和值与差值，并通过形参传送回调用函数。
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
