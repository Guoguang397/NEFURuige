#include <stdio.h>
#include <string.h>

int main()
{
	char n1[100],n2[100];
	int ans[100],max;
	while(~scanf("%s %s",n1,n2))
	{
		memset(ans,0,sizeof(ans));
		max=0;
		for(int i=strlen(n1)-1;i>=0;i--)
		{
			for(int j=strlen(n2)-1;j>=0;j--)
			{
				ans[strlen(n2)-j+(strlen(n1)-i)-2]+=(n1[i]-'0')*(n2[j]-'0');
				if(strlen(n2)-j+(strlen(n1)-i)-2>max)max=strlen(n2)-j+(strlen(n1)-i)-2;
			}
		}
		for(int i=0;i<=max;i++)
		{
			if(ans[i]>10)
			{
				ans[i+1]+=ans[i]/10;
				ans[i]%=10;
				if(ans[i+1]>0&&i>=max)max++;
			}
		}
		for(int i=max;i>=0;i--)printf("%d",ans[i]);
		printf("\n");
	}
	return 0;
}

