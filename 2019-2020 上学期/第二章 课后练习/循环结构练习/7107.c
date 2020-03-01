#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double x,sum,fz,fm;
    while(scanf("%lf",&x)!=-1)
    {
        sum=1;
        fz=fm=1;
        n=2;
        while(fz/fm>=10e-7)
        {
            fz*=x*x;
            fm*=(2*n-2)*(2*n-3);
            if(n%2==0)sum-=fz/fm;
            else sum+=fz/fm;
            n++;
        }
        printf("sum=%f\n",sum);
    }
}
