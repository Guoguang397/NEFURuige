#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n,maxi;
	char tmp[100],ans[100]={0};
	while(~scanf("%d",&n))
	{
		maxi=ans[0]=0;
		getchar();
		getchar();
		for(int i=0;i<n;i++)
		{
			gets(tmp);
			if(strlen(tmp)>strlen(ans))
			{
				strcpy(ans,tmp);
				maxi=strlen(ans);
			}
			
		}
		puts(ans);
	}
	return 0;
}

