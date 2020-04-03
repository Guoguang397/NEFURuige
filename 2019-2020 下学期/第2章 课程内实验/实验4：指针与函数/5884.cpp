#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(int n,double x)
{
    if(n==1)return pow(x,3)-pow(x,2)-1;
	else if(n==2)return pow(x,4)-3*x+1;
	else return x-exp(-x);
}

double fd(int n,double x)
{
	if(n==1)return 3*pow(x,2)-2*x;
	else if(n==2)return 4*pow(x,3)-3;
	else return 1+exp(-x);
}

double getnext(int n,double x)
{
	return x-f(n,x)/fd(n,x);
}

int main()
{
	int n;
	double offset,x;
	while(~scanf("%d",&n))
	{
		scanf("%lf %lf",&x,&offset);
		while(fabs(f(n,x))>offset)
		{
			x=getnext(n,x);
		}
		printf("%d %.2e %.5f\n",n,offset,x);
	}
	return 0;
}
