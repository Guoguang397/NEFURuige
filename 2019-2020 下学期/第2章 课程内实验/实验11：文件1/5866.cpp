#include <stdio.h>
#include <string.h>

#ifdef ONLINE_JUDGE
int main()
{
	printf("��");
    return 0;
}
#else
typedef struct student
{
    int id;
	char name[20],sex;
	double sc[3];
	double sum,ava;
}s[100];

int main()
{
	FILE *fp; 
	int n,id;
	fp=fopen("studnet.txt","w");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("������ѧ�ţ�\n");
		scanf("%d",&s[i].id);
		printf("������������\n");
		getchar();
		gets(str);
		printf("�������Ա�\n");
		scanf("%c",s[i].sex);
		printf("������ɼ���\n");
		scanf("%lf %lf %lf",&s[i].sc[0],&s[i].sc[1],&s[i].sc[2]);
		s[i].sum=s[i].sc[0]+s[i].sc[1]+s[i].sc[2];
		s[i].ava=s[i].sum/3;
	}
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",s[i].id);
		fprintf(fp,"%d",s[i].id);
		getchar();
		gets(str);
		fprintf(fp," %d",strlen(str));
		fprintf(fp," %s",str);
		scanf("%c",&str[0]);
		fprintf(fp," %c",str[0]);
		scanf("%lf %lf %lf",&sc[0],&sc[1],&sc[2]);
		fprintf(fp," %.2f %.2f %.2f",sc[0],sc[1],sc[2]);
		sum=sc[0]+sc[1]+sc[2];
		fprintf(fp," %.2f %.2f\n",sum,sum/3);
	}
	fclose(fp);
	return 0;
}
#endif

