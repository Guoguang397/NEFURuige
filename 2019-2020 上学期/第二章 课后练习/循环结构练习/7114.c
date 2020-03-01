#include <stdio.h>
#include <string.h>

int main()
{
    int num[26]={0};
	char ch[100];
	scanf("%s",&ch);
	for(int i=0;i<strlen(ch);i++)
	{
		if(ch[i]>='A'&&ch[i]<='Z')num[ch[i]-'A']++;
	}
	for(int i=0;i<26;i++)
	{
		printf("%c %d\n",'A'+i,num[i]);
	}
    return 0;
}
