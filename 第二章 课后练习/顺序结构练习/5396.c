#include <stdlib.h>
#include <stdio.h>
int main()
{
    double f;
    int a;
    scanf("%lf",&f);
    a=f;
    f-=a;
    printf("%d %.4f",a,f);
    return 0;
}