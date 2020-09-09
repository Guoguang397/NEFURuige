#include <stdio.h>
#include <math.h>

int isss(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)return 0;
	}
	return 1;
}

int main()
{
	int a,b,c;
	double d,x1,x2;
	scanf("%d %d %d",&a,&b,&c);
	d=sqrt(b*b-4*a*c);
	x1=(-b+d)/2/a;
	x2=(-b-d)/2/a;
	if(x1==x2)printf("%.2lf",x1);
	else if(x1>x2)printf("%.2lf %.2lf",x2,x1);
	else printf("%.2lf %.2lf",x1,x2);
	return 0;
}

