#include <stdio.h>
#include <stdlib.h>
int main()
{
    int least_common_multiple(int x, int y);
    int x, y, z;
    scanf("%d%d%d",&x,&y,&z);
    printf("%d\n",least_common_multiple(least_common_multiple(x,y),z));
    return 0;
}
int least_common_multiple(int x, int y)
{
    //start
    for(int i=2;i<=x*y;i++)
    {
        if(i%x==0&&i%y==0)
    	{
    		return i;
		}
	}
    //end
}