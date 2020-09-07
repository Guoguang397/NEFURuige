#include <stdio.h>
#include <string.h>

int main()
{
	int n,ans,bucket[101],tmp;
	while(~scanf("%d",&n))
	{
		memset(bucket,0,sizeof(bucket));
		ans=0;
		while(n--)
		{
			scanf("%d",&tmp);
			bucket[tmp]++;
		}
		for(int i=100;i>=0;i--)
		{
			if(bucket[i])
			{
				printf("%d %d\n",i,bucket[i]);
				break;
			}
		}
	}
	return 0;
}