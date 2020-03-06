#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int n2,n0,n1,n6,ans;
	while(~scanf("%s",str))
	{
		n2=n0=n1=n6=0;
		for(int i=0;i<strlen(str);i++)
		{
			if(str[i]=='2')n2++;
			else if(str[i]=='0')n0++;
			else if(str[i]=='1')n1++;
			else if(str[i]=='6')n6++;
		}
		ans=n2<n0?n2:n0;
		n1=n1<n6?n1:n6;
		ans=ans<n1?ans:n1;
		printf("%d\n",ans);
	}
	
	return 0;
}
