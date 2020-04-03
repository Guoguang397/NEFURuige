#include <stdio.h>
#include <string.h>

int separate(char *pstr,char (*words)[100])
{
	int n=0,pos=0;
	while(*pstr!='\0')
	{
		if(*pstr>='a'&&*pstr<='z'||*pstr>='A'&&*pstr<='Z')
		{
			*(*(words+n)+pos)=*pstr;
			pos++;
		}
		else if(pos)
		{
			*(*(words+n)+pos)='\0';
			pos=0;
			n++;
		}
		pstr++;
	}
	if(pos)
	{
		*(*(words+n)+pos)='\0';
		n++;
	}
	return n;
}

int main()
{
	int n,num;
	char words[50][100],sentence[1000];
	while(~scanf("%d",&n))
	{
		getchar();
		getchar();
		while(n--)
		{
			gets(sentence);
			if(strstr(sentence,"ood"));
			puts(sentence);
			num=separate(sentence,words);
			for(int i=0;i<num;i++)
			{
				printf("%s ",words[i]);
			}
			printf("\n分出了%d个单词\n",num);
		}
	}
	return 0;
}

