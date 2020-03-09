#include <stdio.h>
#include <string.h>
 
int main()
{
	int n,map[50][50],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&map[i][j]);
			if(j<i)sum+=map[i][j];
		}
	}
	if(sum)printf("up false");
	else printf("It is up");
	return 0;
}

