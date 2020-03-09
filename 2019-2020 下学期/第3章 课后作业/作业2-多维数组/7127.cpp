#include <stdio.h>
#include <string.h>

int main()
{
	int n,map[10][10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&map[i][j]);
	for(int i=0;i<n;i++)
		for(int j=0;j<i;j++)
		{
			if(map[i][j]!=map[j][i])
			{
				printf("No");
				return 0;
			}
		}
	printf("Yes");
	return 0;
}

