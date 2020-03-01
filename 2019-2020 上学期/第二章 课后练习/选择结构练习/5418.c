#include <stdio.h>

int main()
{
    float w;
    scanf("%f",&w);
    if(w<=50)printf("%.2f",w*0.53);
    else if(w<=100)printf("%.2f",50*0.53+(w-50)*0.58);
    else printf("%.2f",50*(0.53+0.58)+(w-100)*0.65);
    return 0;
}