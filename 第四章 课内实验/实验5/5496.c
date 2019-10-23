#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,res;
    while(scanf("%d",&a)!=EOF)
    {
    	res=1;
    	for(int i=a;i>=2;i--)
    	{
    		res*=i;
		}
		printf("%d\n",res);
	}
	return 0;
}