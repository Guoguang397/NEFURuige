#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d",(a+b+c)/3,(int)((a+b+c)/3.0+0.5));
    return 0;
}