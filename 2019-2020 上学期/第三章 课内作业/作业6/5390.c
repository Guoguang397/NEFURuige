#include <stdlib.h>
#include <stdio.h>
int main()
{
    int fz,fm,min;
    scanf("%d/%d",&fz,&fm);
    min = fz>fm?fm:fz;
    for(int i=min;i>=2;i--)
    {
        if(fz%i==0&&fm%i==0)
    	{
    		fz/=i;fm/=i;
		}
	}
	printf("%d/%d",fz,fm);
    return 0;
}