#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    scanf("%f",&x);
    if(x>=1&&x<2)printf("y=%f",3*x+5);
    else if(x>=2&&x<3)printf("y=%f",2*sin(x)-1);
    else if(x>=3&&x<4)printf("y=%f",sqrt(1+x*x));
    else if(x>=4&&x<5)printf("y=%f",x*x-2*x+5);
    else printf("error");
    return 0;
}
