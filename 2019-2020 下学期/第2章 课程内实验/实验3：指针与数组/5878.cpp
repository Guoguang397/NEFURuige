#include <stdio.h>
#include <string.h>

int main()
{
	double max,tmp;
	int posx,posy;
	int n,m;
	while(~scanf("%d %d",&n,&m))
	{
		max=-1;
		for(int i=0;i<n*m;i++)
		{
			scanf("%lf",&tmp);
			if(tmp>max)
			{
				max=tmp;
				posx=i/m+1;
				posy=i%m+1;
			}
		}
		printf("%.2f %d %d",max,posx,posy);
	}
	return 0;
}

