#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    while(scanf("%f %f %f",&a,&b,&c)!=-1)
    {
        printf("gross=%f,net=%f\n",a*b,a*b-c);
    }
    return 0;
}
