#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,bits[10],p=0;
    scanf("%d",&n);
    while(n>0)
    {
        bits[p]=n%18;
    	n/=18;
    	p++;
	}
	for(p--;p>=0;p--)
	{
		printf("%c",bits[p]>9?bits[p]-10+'A':bits[p]+'0');
	}
	return 0;
}