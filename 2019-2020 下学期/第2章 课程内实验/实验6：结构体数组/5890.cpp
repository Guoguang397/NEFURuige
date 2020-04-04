#include <stdio.h>
#include <string.h>

struct stu
{
    int no;
    double score;
}s[100];

int main()
{
	int n;
	double sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %lf",&s[i].no,&s[i].score);
		sum+=s[i].score;
	}
	sum/=n;
	for(int i=0;i<n;i++)
	{
		if(s[i].score>sum)
		{
			printf("  %d %.1f\n",s[i].no,s[i].score);
		}
	}
	return 0;
}
