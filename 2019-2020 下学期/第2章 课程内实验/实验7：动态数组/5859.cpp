#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,m,cnt,pp,rm;
	int *p;
	while(~scanf("%d %d",&n,&m))
	{
		cnt=pp=rm=0;
		p=(int *)malloc(n*sizeof(int));
		for(int i=0;i<n;i++)*(p+i)=i+1;
		while(1)
		{
			if(*(p+pp))
			{
				cnt++;
				if(cnt==m)
				{
					rm++;
					cnt=0;
					*(p+pp)=0;
					if(rm==n-1)break;
				}
			}
			pp++;
			if(pp==n)pp=0;
		}
		for(int i=0;i<n;i++)
		{
			if(*(p+i))
			{
				printf("%d\n",*(p+i)-1);
			}
		}
		free(p);
	}
	
	return 0;
}

