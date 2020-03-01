#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    if(x*x+y*y>=1&&x*x+y*y<=4)printf("ture");
    else printf("false");
    return 0;
}
