/*
��Ŀ������
�뽫�Ͽα�д�ĳ��������еĺ����������������ڴ˻����ϼ�������ڵ�ɾ��������ڵ���Һ���������ͳһ�����һ�������С��������������������ļ��Ͷ�ȡ���������ļ���
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

//��������
struct STU* link_create()
{
	printf("���������ѧ�ż��ɼ�������0�Խ������롣\n"); 
	struct STU *head=(struct STU*)malloc(sizeof(struct STU)),*p1,*p2;
	head->next=NULL;
	int i=0;
	p1=(struct STU*)malloc(sizeof(struct STU));
	p2=head; 
	if(p1==NULL)
	{
		printf("�����ڴ�ʧ�ܣ�\n");
		return head;
	}
	printf("������ѧ�źͳɼ�\n");
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
		printf("������ѧ�źͳɼ�\n");
		scanf("%d",&p1->num);
		if(!p1->num)break;
		scanf("%f",&p1->score);
	}
	p2->next=NULL;
	free(p1);
	printf("������ɣ�\n");
	return head;
}

//�������
void link_print(struct STU *head)
{
	if(head==NULL||head->next==NULL)
	{
		printf("�������ڻ�Ϊ�գ�\n");
		return; 
	}
	head=head->next;
	while(head!=NULL)
	{
		printf("%d %f\n",head->num,head->score);
		head=head->next;
	}
}

//��������
void link_insert(struct STU *head)
{
	if(head==NULL)
	{
		printf("�������ڣ�\n");
		return; 
	}
	struct STU *p0=(struct STU*)malloc(sizeof(struct STU ));
	printf("������Ҫ�����ѧ�źͳɼ���\n");
	scanf("%d",&p0->num);
	if(p0->num==0)
	{
		printf("���������ȡ��\n");
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
	printf("������ɣ�\n");
	return;
}

//����ͷ���
struct STU* link_create_head()
{
	printf("���������ѧ�ż��ɼ�������0�Խ������롣\n"); 
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
			printf("������ѧ�źͳɼ�\n");
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
		printf("������ɣ�\n");
		return head;
	}
}

//��ѯ���� 
void link_query(struct STU *head)
{
	if(head==NULL||head->next==NULL)
	{
		printf("�������ڻ�Ϊ�գ�\n");
		return; 
	}
	int id;
	head=head->next;
	printf("������Ҫ��ѯ��ѧ�ţ�\n");
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
	printf("��ѯ��ѧ�Ų����ڣ�\n");
}

//ɾ��������
void link_delete(struct STU *head)
{
	if(head==NULL||head->next==NULL)
	{
		printf("�������ڻ�Ϊ�գ�\n");
		return; 
	}
	int id;
	struct STU *last=head;
	head=head->next;
	printf("������Ҫɾ����ѧ�ţ�\n");
	scanf("%d",&id);
	while(head!=NULL)
	{
		if(head->num==id)
		{
			printf("%d %f �ѱ�ɾ��\n",head->num,head->score);
			last->next=head->next;
			return;
		}
		last=head;
		head=head->next;
	}
	printf("Ҫɾ����ѧ�Ų����ڣ�\n");
}

//�洢����
void link_store(struct STU *head)
{
	if(head==NULL||head->next==NULL)
	{
		printf("�������ڻ�Ϊ�գ�\n");
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
	printf("����洢��ɣ�\n");
}

//���ļ���ȡ���� 
struct STU* link_read()
{
	FILE  *fp;
	struct STU *p,*p1,*head=(struct STU*)malloc(sizeof(struct STU));
	head->next=NULL;
	p=head;
	fp=fopen("student.dat","rb");
	if(fp==NULL)
	{
		printf("�ļ������ڣ��뱣�����������һ�Σ�\n");
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
	printf("�����ȡ��ɣ�\n");
	return head;
}

int main()
{
	struct STU *h=NULL,*p0;
	int choice;
	while(1)
	{
printf("\n\
      ��Menu��\n\n\
  1������β������          |       Welcome to Link Utility\n\
  2������ͷ������          |\n\
  3���������              |            ����ʵ�ó���\n\
  4������������          |\n\
  5�������㵽����        |          Author:Guoguang\n\
  6��ɾ��������          |\n\
  7���洢�����ļ�        |         Build:2020.05.02\n\
  8�����ļ���ȡ����        |\n\
  0���˳�����              |        Just for homework use.\n\n\
");
		printf("���������ѡ��");
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
				printf("��Чѡ�������һ��!\n");
		}
		printf("\n");
		system("pause");
		system("cls");
	}
	return 0;
}

