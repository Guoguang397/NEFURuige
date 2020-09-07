#include <stdio.h>
#include <math.h>

int main()
{
	double f;
	while(~scanf("%lf",&f))printf("%.2lf\n",3.0/8.0*(f-32.0)*sin(f));
	return 0;
}
