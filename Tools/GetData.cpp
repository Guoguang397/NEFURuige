#include <stdio.h>
#include <string.h>

int main()
{
	char c;
    while((c=getchar())!=EOF)
    {
    	printf("0x%X,",c);
	}
	return 0;
}

