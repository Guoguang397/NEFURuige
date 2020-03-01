#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y;
    long z;
    long IntPower(int base,int exp);
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        z=IntPower(x,y);
        printf("%ld\n",z);
    }
    return 0;
}
 //start
long IntPower(int base,int exp)
{
    long res=1;
	for(long i=0;i<exp;i++)
	{
		res*=base;
	}
	return res;
}
 //end