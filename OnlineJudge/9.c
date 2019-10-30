#include <stdio.h>

int main()
{
	int m,n,k,s;
	while(scanf("%d %d %d",&m,&n,&k)!=-1)
	{
		s=0;
		for(int i=m;i<=n;i+=k)
		{
			s+=i;
		}
		printf("%d\n",s);
	}
	return 0;
}