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
	double average,ava;
	struct node *next;
}LNode;

LNode* link_create(int num)
{
	LNode *head=(LNode *)malloc(sizeof(LNode)),*p;
	p=head;
	head->next=NULL;
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
		p->average=0;
		for(int j=0;j<3;j++)
		{
			scanf("%lf",&p->score[j]);
			p->average+=p->score[j];
		}
		p->ava=p->average/3;
		p->next=NULL;
	}
	return head;
}

void link_print(LNode *h)
{
	h=h->next;
	while(h!=NULL)
	{
		printf("%d %s %c",h->id,h->name,h->sex);
		for(int j=0;j<3;j++)printf(" %.2f",h->score[j]);
		printf(" %.2f",h->ava);
		printf(" %.2f\n",h->average);
		h=h->next;
	}
}

void link_sort(LNode *head)
{
	LNode *h,*last;
	if(head==NULL||head->next==NULL)return;
	int chg=1;
	while(chg)
	{
		last=head;
		h=head->next;
		chg=0;
		while(h->next!=NULL)
		{
			if(h->average<h->next->average)
			{
				last->next=h->next;
				h->next=h->next->next;
				last->next->next=h;
				chg=1;
			}
			last=h;
			if(h->next)h=h->next;
		}
	}
}

void link_store(LNode *h)
{
	FILE *fp=fopen("student.dat","wb");
	h=h->next;
	while(h!=NULL)
	{
		fwrite(h,sizeof(LNode),1,fp);
		h=h->next;
	}
	fclose(fp);
}

int main()
{
	int n;
	scanf("%d",&n);
	LNode *head=link_create(n);
	link_sort(head);
	link_print(head);
	link_store(head);
	return 0;
}
#endif

