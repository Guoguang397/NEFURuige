#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,d,e,f;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	e=a*c-b*d;
	f=a*d+b*c;
	printf("%.2f %.2f",e,f);
	return 0;
}

