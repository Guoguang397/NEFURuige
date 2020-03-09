#include <stdio.h>
#include <math.h>

struct point
{
    double x,y;
}p[3];

int main()
{
	double a,b,c,s=0,pp;
	for(int i=0;i<3;i++)scanf("%lf %lf",&p[i].x,&p[i].y);
	a=sqrt((p[0].x-p[1].x)*(p[0].x-p[1].x)+(p[0].y-p[1].y)*(p[0].y-p[1].y));
	b=sqrt((p[0].x-p[2].x)*(p[0].x-p[2].x)+(p[0].y-p[2].y)*(p[0].y-p[2].y));
	c=sqrt((p[2].x-p[1].x)*(p[2].x-p[1].x)+(p[2].y-p[1].y)*(p[2].y-p[1].y));
	pp=(a+b+c)/2;
	s=sqrt(pp*(pp-a)*(pp-b)*(pp-c));
	printf("%.2f",s);
	return 0;
}

