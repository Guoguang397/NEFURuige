#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a>b?b:a;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
    	{
    		printf("%d",i);
    		return 0;
		}
	}
    return 0;
}