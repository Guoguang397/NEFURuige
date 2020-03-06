#include <stdio.h>
#include <string.h>

int main()
{
	int bucket[27];
	char str[101];
	while(~scanf("%s",str))
	{
		memset(bucket,0,sizeof(bucket));
		for(int i=0;i<strlen(str);i++)
		{
			if(str[i]>='a'&&str[i]<='z')
			{
				bucket[str[i]-'a']++;
			}
		}
		for(int i=0;i<27;i++)
		{
			if(bucket[i])printf("%c %d\n",i+'a',bucket[i]);
		}
	}
	return 0;
}

