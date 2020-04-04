#include <stdio.h>
#include <string.h>

struct stu
{
    char xb;
	char name[20];
	double sg[3];
}s[100];

int main()
{
	int n;
	char maxname[20];
	double sum,score,maxscore;
	while(~scanf("%d",&n))
	{
		maxscore=-1;
		for(int i=0;i<n;i++)
		{
			scanf("%s %c",s[i].name,&s[i].xb);
			score=0;
			for(int j=0;j<3;j++)
			{
				scanf("%lf",&s[i].sg[j]);
				score+=s[i].sg[j];
			}
			score/=3;
			if(score>maxscore&&s[i].xb=='f')
			{
				maxscore=score;
				strcpy(maxname,s[i].name);
			}
		}
		printf("I choose %s,and her score is %.2f.\n",maxname,maxscore);
	}
	return 0;
}
