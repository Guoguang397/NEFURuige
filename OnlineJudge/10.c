#include <stdio.h>
#include <string.h>

int main()
{
	char pass[50];
	int n,g;
	int ok=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		memset(pass, 0, sizeof(pass));
		scanf("%s",&pass);
		if(strlen(pass)<8||strlen(pass)>16)
		{
			printf("NO\n");
			continue;
		}
		g=0;
		for(int j=0;j<strlen(pass);j++)
		{
			if(pass[j]>='a'&&pass[j]<='z')
			{
				ok = 1;
				break;
			}
		}
		if(ok)
		{
			g+=1;
		}
		ok=0;
		for(int j=0;j<strlen(pass);j++)
		{
			if(pass[j]>='A'&&pass[j]<='Z')
			{
				ok = 1;
				break;
			}
		}
		if(ok)
		{
			g+=1;
		}
		ok=0;
		for(int j=0;j<strlen(pass);j++)
		{
			if(pass[j]>='0'&&pass[j]<='9')
			{
				ok = 1;
				break;
			}
		}
		if(ok)
		{
			g+=1;
		}
		ok=0;
		for(int j=0;j<strlen(pass);j++)
		{
			if(pass[j]=='~'||pass[j]=='!'||pass[j]=='@'||pass[j]=='#'||pass[j]=='$'||pass[j]=='%'||pass[j]=='^')
			{
				ok = 1;
				break;
			}
		}
		if(ok)
		{
			g+=1;
		}
		if(g>=3)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		
	}
	return 0;
}