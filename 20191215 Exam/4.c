#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double p[4][2],acd,abd;
	while(scanf("%lf %lf",&p[0][0],&p[0][1])!=-1)
	{
		for(int i=1;i<4;i++)
		{
			scanf("%lf %lf",&p[i][0],&p[i][1]);
		}
		acd=sqrt((p[0][0]-p[2][0])*(p[0][0]-p[2][0])+(p[0][1]-p[2][1])*(p[0][1]-p[2][1]))+sqrt((p[3][0]-p[2][0])*(p[3][0]-p[2][0])+(p[3][1]-p[2][1])*(p[3][1]-p[2][1]));
		abd=sqrt((p[0][0]-p[1][0])*(p[0][0]-p[1][0])+(p[0][1]-p[1][1])*(p[0][1]-p[1][1]))+sqrt((p[3][0]-p[1][0])*(p[3][0]-p[1][0])+(p[3][1]-p[1][1])*(p[3][1]-p[1][1]));
		if(acd>abd)printf("A B D\n");
		else printf("A C D\n");
	}
	return 0;
}
