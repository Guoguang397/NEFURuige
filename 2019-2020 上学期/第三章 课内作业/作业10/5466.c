#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100];
    int c,cnt=0,res;
	res = scanf("%s",a);
	c = a[0]-'0';
	while(res!=-1)
	{
		for(int i=0;i<strlen(a);i++)
	    {
	    	
	    	if(a[i]-'0')
	    	{
	    		if(c==1)
				{
					cnt++;
				}
	    		else
	    		{
	    			printf("%d ",cnt);
	    			cnt = 1;
	    			c = 1;
				}
				if(i==strlen(a)-1)
		    	{
		    		printf("%d",cnt);
				}
			}
			else
			{
				if(c==0)
				{
					cnt++;
				}
	    		else
	    		{
	    			printf("%d ",cnt);
	    			cnt = 1;
	    			c = 0;
				}
				if(i==strlen(a)-1)
		    	{
		    		printf("%d",cnt);
				}
			}
		}
		printf("\n");
		memset(a,0,sizeof(a));
		res = scanf("%s",a);
		c = a[0]-'0';
		cnt = 0;
	}
    
}