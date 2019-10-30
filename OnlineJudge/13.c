#include <stdio.h>
#include <string.h>

int main()
{
	double x,y;
	while(scanf("%lf%lf",&x,&y)!=EOF)
	{
		printf("%.3f\n",x*y/2);
	}
}