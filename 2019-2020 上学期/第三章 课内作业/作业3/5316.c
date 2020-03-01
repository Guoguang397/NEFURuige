#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    char b;
    scanf("%lf",&a); 
    printf("%.2f\n",a);
	scanf("\r%c",&b); 
	printf("%d\n",b);
	printf("%.2f %.2f\n",b);
    printf("%.2f\n",a);
    return 0;
}