#include <stdio.h>
#include <string.h>

int main()
{
    int min,tmp;
    scanf("%d",&min);
    for(int i=0;i<8;i++)
    {
    	scanf("%d",&tmp);
    	if(tmp<min)min=tmp;
	}
	printf("The min is: %d",min);
	return 0;
}

