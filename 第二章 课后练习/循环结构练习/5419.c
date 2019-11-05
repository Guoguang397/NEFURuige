#include <stdio.h>

int main()
{
    int a,n,r=0;
    scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a%2==0)r++;
	}
	printf("%d",r);
	return 0;
}