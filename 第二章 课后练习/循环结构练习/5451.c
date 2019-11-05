#include <stdio.h>

int main()
{
    int a,n;
	float sum,max=-1,min=10086;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a>max)max=a;
		if(a<min)min=a;
		sum+=a;
	}
	printf("%.2f %.2f %.2f",max,min,sum/n);
	return 0;
}