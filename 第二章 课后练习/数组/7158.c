#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tmp,a[11],ok=0;
    memset(a,0,sizeof(a));
    for(int i=0;i<11;i++)
    {
        scanf("%d",&a[i]);
	}
	while(!ok)
	{
		ok=1;
		for(int i=0;i<10;i++)
		{
			if(a[i]>a[i+1])
			{
				a[i]+=a[i+1];
				a[i+1]=a[i]-a[i+1];
				a[i]-=a[i+1];
				ok = 0;
			}
		}
	}
	for(int i=0;i<11;i++)
    {
    	printf("%d ",a[i]);
	}
	return 0;
}