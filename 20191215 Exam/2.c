#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,a[5],b[5],sumg=0,sumt=0,avag,avat,good=0;
	while(scanf("%d",&n)!=-1)
	{
		sumg=a[0];
		sumt=good=0;
		for(int i=1;i<5;i++)
		{
			scanf("%d",&a[i]);
			sumg+=a[i];
		}
		for(int i=0;i<5;i++)
		{
			scanf("%d",&b[i]);
			sumt+=b[i];
		}
		avag=sumg/5;
		avat=sumt/5;
		for(int i=0;i<5;i++)
		{
			if(a[i]>avag&&b[i]>avat)good++;
		}
		printf("%d\n",good);
	}
	return 0;
}
