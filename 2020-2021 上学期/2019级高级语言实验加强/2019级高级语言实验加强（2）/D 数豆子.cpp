#include <stdio.h>
#include <math.h>

int main()
{
	int n,ans;
	char c[52];
	while(~scanf("%d %s",&n,c))
	{
		ans=0;
		for(int i=0;i<n;i++)
		{
			if(c[i]=='*')ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}