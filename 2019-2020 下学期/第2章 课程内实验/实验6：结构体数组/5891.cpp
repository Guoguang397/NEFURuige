#include <stdio.h>
#include <string.h>

struct stu
{
    int no;
	char name[20];
	int type;
    double score;
}s[100];

int main()
{
	int n,fail=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %s %d %lf",&s[i].no,s[i].name,&s[i].type,&s[i].score);
		if(s[i].type==1&&s[i].score<60||s[i].type==2&&s[i].score<50||s[i].type==3&&s[i].score<65)fail++;
	}
	printf("%d\n",fail);
	for(int i=0;i<n;i++)
	{
		printf("%d %s %d %.2f\n",s[i].no,s[i].name,s[i].type,s[i].score);
	}
	return 0;
}
