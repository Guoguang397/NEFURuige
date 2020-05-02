/*
题目描述：
请将上课编写的程序中所有的函数连接起来，并在此基础上加入链表节点删除和链表节点查找函数，并都统一在这个一个程序中。（包括建立链表数据文件和读取链表数据文件）
*/
#include <stdio.h>
#include <stdlib.h>
struct STU
{
	int num;
	float score;
	struct STU *next;
};
int n=0;

//创建链表
struct STU* link_create()
{
	printf("请输入多组学号及成绩，输入0以结束输入。\n"); 
	struct STU *head=(struct STU*)malloc(sizeof(struct STU)),*p1,*p2;
	head->next=NULL;
	int i=0;
	p1=(struct STU*)malloc(sizeof(struct STU));
	p2=head; 
	if(p1==NULL)
	{
		printf("分配内存失败！\n");
		return head;
	}
	printf("请输入学号和成绩\n");
	scanf("%d",&p1->num);
	if(!p1->num)return head;
	scanf("%f",&p1->score);
	p1->next=NULL;
	while(p1->num!=0)
	{
		n++;
		p2->next=p1;
		p2=p1;
		p1=(struct STU*)malloc(sizeof(struct STU));
		p1->next=NULL;
		printf("请输入学号和成绩\n");
		scanf("%d",&p1->num);
		if(!p1->num)break;
		scanf("%f",&p1->score);
	}
	p2->next=NULL;
	free(p1);
	printf("创建完成！\n");
	return head;
}

//输出链表
void link_print(struct STU *head)
{
	if(head==NULL||head->next==NULL)
	{
		printf("链表不存在或为空！\n");
		return; 
	}
	head=head->next;
	while(head!=NULL)
	{
		printf("%d %f\n",head->num,head->score);
		head=head->next;
	}
}

//插入链表
void link_insert(struct STU *head)
{
	if(head==NULL)
	{
		printf("链表不存在！\n");
		return; 
	}
	struct STU *p0=(struct STU*)malloc(sizeof(struct STU ));
	printf("请输入要插入的学号和成绩：\n");
	scanf("%d",&p0->num);
	if(p0->num==0)
	{
		printf("插入操作已取消\n");
		return;
	}
	scanf("%f",&p0->score);
	p0->next=NULL;
	struct STU *p1,*p2;
	if(head->next==NULL)
	{
		head->next=p0;
		p0->next=NULL;
	}
	else
	{
		p1=head->next;
		while(p0->num>p1->num&&p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		if(p0->num<p1->num)
		{
			if(p1==head->next)
			{
				p0->next=p1;
				head->next=p0;
			}
			else
			{
				p0->next=p1;
				p2->next=p0;
			}
		}
		else
		{
			p1->next=p0;
			p0->next=NULL;
		}
	}
	printf("插入完成！\n");
	return;
}

//创建头插表
struct STU* link_create_head()
{
	printf("请输入多组学号及成绩，输入0以结束输入。\n"); 
	struct STU *head=NULL,*p1;
	head=(struct STU *)malloc(sizeof(struct STU));
	if(head==NULL) return NULL;
	else
	{
		head->next=NULL;
		do
		{
			p1=(struct STU *)malloc(sizeof(struct STU));
			p1->next=NULL;
			printf("请输入学号和成绩\n");
			scanf("%d",&p1->num);
			if(p1->num==0) break;
			scanf("%f",&p1->score);
			n++;
			if(n==1) head->next=p1;
			else
			{
				p1->next=head->next;
				head->next=p1;
			}
		}
		while(1);
		printf("创建完成！\n");
		return head;
	}
}

//查询链表 
void link_query(struct STU *head)
{
	if(head==NULL||head->next==NULL)
	{
		printf("链表不存在或为空！\n");
		return; 
	}
	int id;
	head=head->next;
	printf("请输入要查询的学号：\n");
	scanf("%d",&id);
	while(head!=NULL)
	{
		if(head->num==id)
		{
			printf("%d %f\n",head->num,head->score);
			return;
		}
		head=head->next;
	}
	printf("查询的学号不存在！\n");
}

//删除链表结点
void link_delete(struct STU *head)
{
	if(head==NULL||head->next==NULL)
	{
		printf("链表不存在或为空！\n");
		return; 
	}
	int id;
	struct STU *last=head;
	head=head->next;
	printf("请输入要删除的学号：\n");
	scanf("%d",&id);
	while(head!=NULL)
	{
		if(head->num==id)
		{
			printf("%d %f 已被删除\n",head->num,head->score);
			last->next=head->next;
			return;
		}
		last=head;
		head=head->next;
	}
	printf("要删除的学号不存在！\n");
}

//存储链表
void link_store(struct STU *head)
{
	if(head==NULL||head->next==NULL)
	{
		printf("链表不存在或为空！\n");
		return; 
	}
	struct STU *p;
	p=head->next;
	FILE *fp;
	fp=fopen("student.dat","wb");
	while(p!=NULL)
	{
		printf("%d %f\n",p->num,p->score);
		fwrite(p,sizeof(struct STU),1,fp);
		p=p->next;
	}
	fclose(fp);
	printf("链表存储完成！\n");
}

//从文件读取链表 
struct STU* link_read()
{
	FILE  *fp;
	struct STU *p,*p1,*head=(struct STU*)malloc(sizeof(struct STU));
	head->next=NULL;
	p=head;
	fp=fopen("student.dat","rb");
	if(fp==NULL)
	{
		printf("文件不存在，请保存链表后再试一次！\n");
		return NULL;
	}
	while(1)
	{
		p1=(struct STU*)malloc(sizeof(struct STU));
		fread(p1,sizeof(struct STU),1,fp);
		p1->next=NULL;
		if(feof(fp))break;
		p->next=p1;
		p=p1;
		printf("%d %f\n",p1->num,p1->score);
	}
	fclose(fp);
	printf("链表读取完成！\n");
	return head;
}

int main()
{
	struct STU *h=NULL,*p0;
	int choice;
	while(1)
	{
printf("\n\
      【Menu】\n\n\
  1：创建尾插链表          |       Welcome to Link Utility\n\
  2：创建头插链表          |\n\
  3：输出链表              |            链表实用程序\n\
  4：查找链表结点          |\n\
  5：插入结点到链表        |          Author:Guoguang\n\
  6：删除链表结点          |\n\
  7：存储链表到文件        |         Build:2020.05.02\n\
  8：从文件读取链表        |\n\
  0：退出程序              |        Just for homework use.\n\n\
");
		printf("请输入你的选择：");
		scanf("%d",&choice);
		printf("\n");
		switch(choice)
		{
			
			case 1:
				h=link_create();
				break;
			case 2:
				h=link_create_head(); 
				break; 
			case 3:
				link_print(h);
				break;
			case 4:
				link_query(h);
				break;
			case 5:
				link_insert(h);
				break;
			case 6:
				link_delete(h);
				break;
			case 7:
				link_store(h);
				break;
			case 8:
				h=link_read();
				break;
			case 0:
				return 0;
			default:
				printf("无效选项，请再试一次!\n");
		}
		printf("\n");
		system("pause");
		system("cls");
	}
	return 0;
}

