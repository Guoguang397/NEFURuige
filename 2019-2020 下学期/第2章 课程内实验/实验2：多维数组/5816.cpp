#include <stdio.h>
#include <string.h>

int main()
{
	int n,num[1000],sum,max;
	char ch[10],ans[10];
	while(~scanf("%d",&n))
	{
		max=0;
		memset(num,0,sizeof(num));
		while(n--)
		{
			sum=0;
			scanf("%s",&ch);
			for(int i=0;i<strlen(ch);i++)sum+=ch[i]-'a';
			num[sum]++;
			if(num[sum]>max)
			{
				max=num[sum];
				strcpy(ans,ch);
			}
		}
		printf("%s\n",ans);
	}
    return 0;
}

