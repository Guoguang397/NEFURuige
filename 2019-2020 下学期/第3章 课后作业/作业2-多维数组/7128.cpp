#include <stdio.h>
#include <string.h>

int main()
{
	int map[50][50];
	double sum[50]={0},sa=0;
	int m,n;
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&map[i][j]);
			sa+=map[i][j];
			sum[j]+=map[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		if(i!=0)printf(" ");
		printf("%.2f",sum[i]/m);
	}
	printf("\n%.2f",sa/m/n);
	return 0;
}

