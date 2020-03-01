#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char o;
    float n,res;
    scanf("%f",&res);
    while(1)
    {
        scanf("%c",&o);
        if(o=='=')break;
        scanf("%f",&n);
        switch(o)
        {
            case '+':
                res+=n;
                break;
            case '-':
                res-=n;
                break;
            case '*':
                res*=n;
                break;
            case '/':
                res/=n;
                break;
        }
    }
    printf("result=%f",res);
}
