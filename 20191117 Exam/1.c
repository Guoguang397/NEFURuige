#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	double bmi,m,h;
	scanf("%lf %lf",&m,&h);
	bmi=m/pow(h,2);
	if(bmi>=18.5&&bmi<=24.9)a=1;
	else if(bmi<18.5)a=2;
	else a=3;
	printf("%.2f %d",bmi,a);
	return 0;
}
