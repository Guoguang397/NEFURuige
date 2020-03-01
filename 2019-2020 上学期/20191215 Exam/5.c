#include <stdio.h>
#include <stdlib.h>
//start 
void str_del(char str[],char del)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==del)
		{
			for(int j=i;str[j]!='\0';j++)
			{
				str[j]=str[j+1];
			}
			i--;
		}
	}
}

//end
int main()
{
    char str[100],ch;
    while(scanf("%s %c",str,&ch)!=-1)
    {
      str_del(str,ch);
      printf("%s\n",str);
    }
    return 0;
}
