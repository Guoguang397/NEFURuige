#include <stdio.h>
#include <stdlib.h>

#ifdef ONLINE_JUDGE
int main()
{
	printf("��");
	return 0;
}
#else
typedef struct node
{
    unsigned int id;
	char name[20],sex;
	double score[3];
	double sum,ava;
	struct node *next;
}LNode;
int n=0;

LNode* link_create()
{
	int num; 
	LNode *head=(LNode *)malloc(sizeof(LNode)),*p;
	p=head;
	head->next=NULL;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		p->next=(LNode *)malloc(sizeof(LNode));
		p=p->next;
		printf("������ѧ��ѧ�ţ�\n");
		scanf("%d",&p->id);
		printf("������ѧ��������\n");
		getchar();
		gets(p->name);
		printf("������ѧ���Ա�\n");
		scanf("%c",&p->sex);
		p->sum=0;
		for(int j=0;j<3;j++)
		{
			scanf("%lf",&p->score[j]);
			p->sum+=p->score[j];
		}
		p->ava=p->sum/3;
		p->next=NULL;
	}
	return head;
}

void link_print(LNode *head)
{
	if(head==NULL||head->next==NULL) return; 
	head=head->next;
	while(head!=NULL)
	{
		printf("%d %s %c %.2f %.2f %.2f %.2f %.2f\n",head->id,head->name,head->sex,head->score[0],head->score[1],head->score[2],head->sum,head->ava);
		head=head->next;
	}
	printf("��ӡ��ɣ�\n"); 
}

void link_delete(LNode *head)
{
	if(head==NULL||head->next==NULL) return;
	int id;
	LNode *last=head;
	head=head->next;
	scanf("%d",&id);
	while(head!=NULL)
	{
		if(head->id==id)
		{
			last->next=head->next;
			printf("ѧ����Ϣɾ���ɹ���\n");
			return;
		}
		last=head;
		head=head->next;
	}
}

void link_store(LNode *head)
{
	if(head==NULL||head->next==NULL)
	{
		printf("�������ڻ�Ϊ�գ�\n");
		return; 
	}
	LNode *p;
	p=head->next;
	FILE *fp;
	fp=fopen("student.dat","wb");
	while(p!=NULL)
	{
		fwrite(p,sizeof(LNode),1,fp);
		p=p->next;
	}
	fclose(fp);
	printf("����ɹ���\n");
}

LNode* link_read()
{
	FILE  *fp;
	LNode *p,*p1,*head=(LNode*)malloc(sizeof(LNode));
	head->next=NULL;
	p=head;
	fp=fopen("student.dat","rb");
	if(fp==NULL) return NULL;
	while(1)
	{
		p1=(LNode*)malloc(sizeof(LNode));
		fread(p1,sizeof(LNode),1,fp);
		p1->next=NULL;
		if(feof(fp))break;
		p->next=p1;
		p=p1;
	}
	fclose(fp);
	printf("ѧ����Ϣ��ȡ�ɹ���\n");
	return head;
}

int main()
{
	LNode *h=NULL,*p0;
	int choice;
	printf("\
*****************************************\n\
������������ͣ�\n\
1��ʾ����ѧ����Ϣ;\n\
2��ʾ����ѧ��ɾ����̬�����е�ѧ����Ϣ\n\
3��ʾ��������ѧ����Ϣ���浽student.dat�ļ�\n\
4��ʾ��student.dat�ļ��ж�ȡѧ����Ϣ��������̬����\n\
5��ʾ����̬������ѧ����Ϣ��ӡ�������Ļ\n\
0��ʾ�˳�ϵͳ��\n\
*****************************************\n\
");
	while(1)
	{
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				h=link_create();
				break;
			case 2:
				link_delete(h);
				break; 
			case 3:
				link_store(h);
				break;
			case 4:
				h=link_read();
				break;
			case 5:
				link_print(h);
				break;
			case 0:
				return 0;
		}
	}
	return 0;
}
#endif

