#include <stdio.h>
#include <string.h>

int main()
{
	int n,num[100],n0=0,cnt=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[cnt]);
		if(num[cnt])cnt++;
		else n0++;
	}
	for(int i=0;i<cnt;i++)printf("%d ",num[i]);
	while(n0--)printf("0 ");
	return 0;
}

