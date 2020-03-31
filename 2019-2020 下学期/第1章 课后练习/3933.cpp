#include <stdio.h>
#include <string.h>

int main()
{
    int min,max,tmp;
    scanf("%d",&min);
    max=min;
    for(int i=0;i<8;i++)
    {
    	scanf("%d",&tmp);
    	if(tmp>max)max=tmp;
    	if(tmp<min)min=tmp;
	}
	printf("The max is:%d\nThe min is:%d",max,min);
	return 0;
}

