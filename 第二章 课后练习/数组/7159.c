#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,b[50][2],n,mpp;
    float dir[50],mp=10086;
    scanf("%d %d",&x,&y);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&b[i][0],&b[i][1]);
    	dir[i]=sqrt((b[i][0]-x)*(b[i][0]-x)+(b[i][1]-y)*(b[i][1]-y));
    	if(dir[i]<mp)
    	{
    		mp=dir[i];
    		mpp=i;
		}
	}
	printf("%d %d\n",b[mpp][0],b[mpp][1]);
	return 0;
}