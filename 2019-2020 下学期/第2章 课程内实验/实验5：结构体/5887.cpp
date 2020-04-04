#include <stdio.h>

struct stu
{
    int xuehao;
	char name[20];
	double score[4];
}s[100];

int main()
{
	int n;
	double sum;
	scanf("%d",&n);
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
		printf("%d %s %.2f %.2f\n",s[i].xuehao,s[i].name,sum,sum/4);
	}
	return 0;
}
