/*
��Ŀ������
��������ѧ���ṹ�������Ҫ�������ֳ�ѧ������רҵ���꼶�ͳɼ��ȵĻ������ԣ�
Ȼ��Ϊ���Ǹ�ֵ����������ͬѧ���ɼ��Ⱥ�˳�������
*/

#include <stdio.h>
#include <math.h>

struct student
{
	char name[20],major[20];//����רҵ 
	int grade;//�꼶 
	double score;//�ɼ� 
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
