#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[3];
	scanf("%f %f %f",&a[0],&a[1],&a[2]);
	int ok=0;
	while(!ok)
	{
		ok=1;
		for(int i=0;i<2;i++)
		{
			if(a[i]<a[i+1])
			{
				a[i]+=a[i+1];
				a[i+1]=a[i]-a[i+1];
				a[i]-=a[i+1];
				ok = 0;
			}
		}
	}
	printf("%.2f %.2f %.2f",a[0],a[1],a[2]);
}