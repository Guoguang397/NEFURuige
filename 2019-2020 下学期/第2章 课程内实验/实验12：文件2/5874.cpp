#include <stdio.h>
#include <stdlib.h>

#ifdef ONLINE_JUDGE
int main()
{
	printf("无");
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
		printf("请输入学生学号：\n");
		scanf("%d",&p->id);
		printf("请输入学生姓名：\n");
		getchar();
		gets(p->name);
		printf("请输入学生性别：\n");
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
	printf("打印完成！\n"); 
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
			printf("学生信息删除成功！\n");
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
		printf("链表不存在或为空！\n");
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
	printf("保存成功！\n");
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
	printf("学生信息读取成功！\n");
	return head;
}

int main()
{
	LNode *h=NULL,*p0;
	int choice;
	printf("\
*****************************************\n\
请输入操作类型：\n\
1表示输入学生信息;\n\
2表示根据学号删除动态链表中的学生信息\n\
3表示将链表中学生信息保存到student.dat文件\n\
4表示从student.dat文件中读取学生信息，构建动态链表。\n\
5表示将动态链表中学生信息打印输出到屏幕\n\
0表示退出系统。\n\
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

