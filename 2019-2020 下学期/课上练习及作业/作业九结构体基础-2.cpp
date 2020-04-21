/*
题目描述：
定义两个学生结构体变量，要求能体现出学生所属专业及年级和成绩等的基本属性，
然后为他们赋值，并将两名同学按成绩先后顺序输出。
*/

#include <stdio.h>
#include <math.h>

struct student
{
	char name[20],major[20];//姓名专业 
	int grade;//年级 
	double score;//成绩 
}s[2],tmp;

int main()
{
	for(int i=0;i<2;i++)
	{
		scanf("%s %s %d %lf",s[i].name,s[i].major,&s[i].grade,&s[i].score);
	}
	if(s[0].score<s[1].score)
	{
		tmp=s[0];
		s[0]=s[1];
		s[1]=tmp;
	}
	for(int i=0;i<2;i++)
	{
		printf("%s %s %d %.2f\n",s[i].name,s[i].major,s[i].grade,s[i].score);
	}
	return 0;
}
