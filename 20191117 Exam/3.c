#include <stdio.h>

int main()
{
	double x,y;
	scanf("%lf",&x);
	if(x<5)y=x+5;
	else if(x>=5&&x<10)y=3*x-1;
	else y=2*x+1;
	printf("%.2f",y);
	return 0;
}
