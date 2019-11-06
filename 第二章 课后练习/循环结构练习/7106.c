#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char x;
    float z=0;
    int p=1;
    while(scanf("%c",&x)!=-1)
    {
        if(x=='.')break;
        z=z*10+x-'0';
    }
    while(scanf("%c",&x)!=-1)
    {
        if(x=='\n')continue;
        z+=(float)(x-'0')/pow(10,p);
        p++;
    }
    printf("result=%f",z);
}
