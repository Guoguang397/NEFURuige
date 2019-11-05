#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[100],n,tmp,p=0,ok=0,has=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tmp);
        has=0;
        for(int i=0;i<p;i++)
        {
            if(a[i]==tmp)
			{
				has=1;
				break;
			}
		}
		if(has)continue;
		a[p]=tmp;
		p++;
	}
	while(!ok)
	{
		ok=1;
		for(int i=0;i<p-1;i++)
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
	for(int i=0;i<p;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}