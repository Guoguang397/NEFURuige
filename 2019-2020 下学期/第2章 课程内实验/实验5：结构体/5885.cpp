#include <stdio.h>

struct student
{
    int id;
	char name[100];
	double score;
}s[100];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d %s %lf",&s[i].id,s[i].name,&s[i].score);
	for(int i=0;i<n;i++)printf("%d  %s  %.2lf\n",s[i].id,s[i].name,s[i].score);
	return 0;
}
