#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d;
    while(~scanf("%lf %lf %lf %lf",&a,&b,&c,&d))
    {
    	printf("%.1lf\n",sqrt((c-a)*(c-a)+(d-b)*(d-b)));
	}
    return 0;
}
