#include <stdio.h>
#include <string.h>

int main()
{
    int map[4][4];
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			scanf("%d",&map[i][j]);
	for(int i=0;i<4;i++)
		for(int j=0;j<i;j++)
		{
			if(map[i][j]!=map[j][i])
			{
				printf("²»¶Ô³Æ");
				return 0;
			}
		}
	printf("¶Ô³Æ");
	return 0;
}

