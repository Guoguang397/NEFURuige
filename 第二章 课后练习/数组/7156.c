#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[5],n;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
	scanf("%d",&n);
	for(int i=0;i<5;i++)
	{
		if(n>1)
		for(int j=i+1;j<5;j++)
		{
			if(n>2)
			for(int k=j+1;k<5;k++)
			{
				if(n>3)
				for(int l=k+1;l<5;l++)
				{
					if(n>4)
					for(int m=l+1;m<5;m++)
					{
						printf("%d %d %d %d %d\n",a[i],a[j],a[k],a[l],a[m]);
					}else printf("%d %d %d %d\n",a[i],a[j],a[k],a[l]);
				}else printf("%d %d %d\n",a[i],a[j],a[k]);
			}else printf("%d %d\n",a[i],a[j]);
		}else printf("%d\n",a[i]);
	}
	return 0;
}