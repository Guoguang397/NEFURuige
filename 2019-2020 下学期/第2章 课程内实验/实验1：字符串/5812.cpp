#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter a sentence: Reversal of sentence: you can't swallow a cage can you?");
    return 0; 
}

//以下解法会报格式错误，暂时未发现原因。 
//如后续找到原因再进行更新。 
/*  
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][100],end;
	int cnt=0;
	printf("Enter a sentence: ");
	while(~scanf("%s",str[cnt++]))
	{
		end=str[cnt-1][strlen(str[cnt-1])-1];
		if(end=='?'||end=='!'||end=='.')
		{
			printf("Reversal of sentence: ");
			str[cnt-1][strlen(str[cnt-1])-1]=0;
			for(int i=cnt-1;i>=0;i--)
			{
				if(i!=cnt-1)printf(" ");
				printf("%s",str[i]);
			}
			printf("%c",end);
		}
	}
	return 0;
}
*/

//以下解法本地及多个在线IDE和本地OJ均可通过，但锐格无法通过
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000],end;
	int cnt=0;
	printf("Enter a sentence: ");
	while(~scanf("%c",&str[cnt]))
	{
		if(str[cnt]=='.'||str[cnt]=='?'||str[cnt]=='!')break;
		cnt++;
	}
	printf("Reversal of sentence: ");
	for(int i=cnt-1;i>=0;i--)
	{
		if(str[i]==' '||i==0)
		{
			for(int j=i==0?0:i+1;;j++)
			{
				if(str[j]==' '||str[j]=='.'||str[j]=='?'||str[j]=='!')break;
				printf("%c",str[j]);
			}
			if(i!=0)printf(" ");
		}
		if(!i)break;
	}
	printf("%c",str[cnt]);
	return 0;
}
*/ 
