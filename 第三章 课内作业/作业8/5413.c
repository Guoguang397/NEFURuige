#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y2,min=10086;
    for(x=0.01;x<=10;x+=0.01)
    {
    	y2 = 54/x;
		if(x*x+y2<min)min=x*x+y2;
	}
	printf("%.2f\n",sqrt(min));
    return 0;
}