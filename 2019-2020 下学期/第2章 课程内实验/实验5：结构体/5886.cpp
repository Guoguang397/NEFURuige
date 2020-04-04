#include <stdio.h>

struct student
{
    int id;
	char name[100];
	double score;
}s[100];

int main()
{
	int n,yx=0,lh=0,bjg=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %s %lf",&s[i].id,s[i].name,&s[i].score);
		if(s[i].score>=80)yx++;
		else if(s[i].score>=60)lh++;
		else bjg++;
	}
	printf("%d %d %d",yx,lh,bjg);
	return 0;
}
