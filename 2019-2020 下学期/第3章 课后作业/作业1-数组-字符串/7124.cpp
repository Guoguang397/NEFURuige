#include <stdio.h>
#include <string.h>

int main()
{
	char s[81],s1[21];
	int ans=0,j;
	scanf("%s %s",s,s1);
	j=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==s1[j])
		{
			if(j==strlen(s1)-1)
			{
				ans++;
				i-=j-1;
				j=0;
			}
			j++;
		}
		else
		{
			i-=j;
			j=0;
		}
	}
	printf("%d",ans);
	return 0;
}

