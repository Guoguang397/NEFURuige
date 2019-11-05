#include <stdlib.h>
#include <stdio.h>
int main()
{
    float r,p=3.1415926,a,zc;
    scanf("%f",&r);
    a=p*r*r;
    zc=2*p*r;
    printf("%.4f %.4f",a,zc);
    return 0;
}