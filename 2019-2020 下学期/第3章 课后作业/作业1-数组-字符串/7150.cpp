#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
	char *str[100],*tmp;
	while(~scanf("%d",&n))
	{
		getchar();
        getchar();
		for(int i=0;i<n;i++)
		{
			tmp=(char *)malloc(100*sizeof(char));
			gets(tmp);
			str[i]=tmp;
			//puts(tmp);
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1;j++)
			{
				if(strcmp(str[j],str[j+1])>0)
				{
					tmp=str[j];
					str[j]=str[j+1];
					str[j+1]=tmp;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			puts(str[i]);
		}
	}
	return 0;
}

