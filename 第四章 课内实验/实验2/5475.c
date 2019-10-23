#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    char c1,c2,c3;
    double a;
    scanf("%d %c%lf%c%c%d",&m,&c1,&a,&c2,&c3,&n);
    printf("%d    %c  %.1f%c%c %d\n",m,c1,a,c2,c3,n);
    return 0;
}
