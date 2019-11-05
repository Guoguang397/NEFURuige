#include <stdio.h>

int main()
{
    float a;
    scanf("%f",&a);
    if(a<5)printf("%.2f",a+5);
    else if(a<10)printf("%.2f",a*3-1);
    else printf("%.2f",a*2+1);
    return 0;
}
