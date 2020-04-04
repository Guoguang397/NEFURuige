#include <stdio.h>
#include <string.h>

struct stu
{
    int xuehao;
	char name[20];
	double score[4];
}s[100];

int main()
{
	int n,maxid;
	char maxname[20];
	double sum,maxscore;
	while(~scanf("%d",&n))
	{
		maxscore=-1;
		for(int i=0;i<n;i++)
		{
			scanf("%d %s",&s[i].xuehao,s[i].name);
			for(int j=0;j<4;j++)
			{
				scanf("%lf",&s[i].score[j]);
			}
		}
		for(int i=0;i<n;i++)
		{
			sum=0;
			for(int j=0;j<4;j++)
			{
				sum+=s[i].score[j];
			}
			if(sum>maxscore)
			{
				maxscore=sum;
				strcpy(maxname,s[i].name);
				maxid=s[i].xuehao;
			}
		}
		printf("%d %s\n",maxid,maxname);
	}
	return 0;
}
