#include <stdio.h>
#include <string.h>

int main()
{
	int n,res;
	while(scanf("%d",&n)!=-1)
	{
		res=1;
		for(int i=0;i<n-1;i++)
		{
			res=(res+1)*2;
		}
		printf("%d\n",res);
	}
}