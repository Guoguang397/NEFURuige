#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    char name[21];
    char xh[11];
	double score;
}student;
student s[100];

int cmp(const void *a ,const void *b)
{
	return (*(student *)a).score < (*(student *)b).score ? 1 : -1;
}

int main()
{
	int n,k;
	while(~scanf("%d",&n))
	{
		for(int i=0;i<n;i++)
		{
			scanf("%s %s %lf",s[i].xh,s[i].name,&s[i].score);
		}
		qsort(s,n,sizeof(student),cmp);
		for(int i=0;i<3;i++)
		{
			printf("%s %s\n",s[i].xh,s[i].name);
		}
	}
	return 0;
}

/*
//说明：锐格无法使用本版本代码，会报Student undeclared 
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[21];
	char xh[11];
	double score;
}s[100];

int cmp(const void *a ,const void *b)
{
	return (*(Student *)a).score < (*(Student *)b).score ? 1 : -1;
}

int main()
{
	int n,k;
	while(~scanf("%d",&n))
	{
		for(int i=0;i<n;i++)
		{
			scanf("%s %s %lf",s[i].xh,s[i].name,&s[i].score);
		}
		qsort(s,n,sizeof(Student),cmp);
		for(int i=0;i<3;i++)
		{
			printf("%s %s\n",s[i].xh,s[i].name);
		}
	}
	return 0;
}*/
