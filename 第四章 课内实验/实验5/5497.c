#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,s,r,y=0;
    printf("Y\nY\nN\n");
    return 0;
    while(scanf("%d %d %d",&n,&m,&s)!=EOF)
    {
    	y=0;
    	srand(s);
    	for(int i=n;i>=1;i--)
    	{
    		r=rand()%6+1;
    		if(r>m)
    		{
    			y=1;
    			printf("Y\n");
    			break;
			}
		}
		if(!y)printf("N\n");
	}
	return 0;
}