#include <stdio.h>
#include <string.h>

int main()
{
	int n1,m1,n2,m2,map1[10][10],map2[10][10],ans[10][10],sum=0;
	scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
	if(m1!=n2)
	{
		printf("0");
		return 0;
	}
	for(int i=0;i<n1;i++)
		for(int j=0;j<m1;j++)
			scanf("%d",&map1[i][j]);
	for(int i=0;i<n2;i++)
		for(int j=0;j<m2;j++)
			scanf("%d",&map2[i][j]);
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m2;j++)
		{
			sum=0;
			for(int k=0;k<m1;k++)
			{
				sum+=map1[i][k]*map2[k][j];
			}
			printf("%d ",sum);
		}
		printf("\n");
	}
		

	return 0;
}

