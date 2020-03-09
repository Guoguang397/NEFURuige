#include <stdio.h>

int main()
{
	int before[2][3]={1,2,3,4,5,6},after[3][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",before[i][j]);
			after[j][i]=before[i][j];
		}
		printf("\n");
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",after[i][j]);
		}
		printf("\n");
	}
	return 0;
}

