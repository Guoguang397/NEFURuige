#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tmp,ok=0,n;
    float sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tmp);
        sum+=tmp;
        if(tmp>=60)ok++;
    }
	printf("%.2f %.2f",sum/n,(float)ok/n);

	return 0;
}