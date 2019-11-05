#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,t;
    scanf("%d %d",&a,&b);
    //start
    t=a;
    a=b;
    b=t;
    //end
    printf("%d %d",a,b);
    return 0;
}