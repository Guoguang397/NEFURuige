#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    double r,nr;
    scanf("%f",&x);
    r=x/2.0;
    while(1)
    {
        nr=0.5*(r+x/r);
    	if(fabs(nr-r)<10e-5)break;
    	r=nr;
	}
	printf("%.5f",nr);
	return 0;
}