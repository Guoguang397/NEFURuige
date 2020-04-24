#include <stdio.h>

void fold(int num[][20],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			num[j][i]+=num[i][j];
			num[i][j]=0;
		}
	}
}

int main()
{
	int n,num[20][20];
	while(~scanf("%d",&n))
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&num[i][j]);
			}
		}
		fold(num,n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d ",num[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

