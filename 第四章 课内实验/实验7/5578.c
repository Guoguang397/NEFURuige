#include <stdio.h>
#include <stdlib.h>

int judge(int a,int b)
{
    return !(a%b);
}

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
    	if(judge(a,b))printf("1\n");
    	else printf("0\n");
	}
	return 0;
}