#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    unsigned int id;
	char name[20];
	double score[3];
	double sum,ava;
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
		scanf("%d %s",&p->id,p->name);
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
	LNode *h=head;
	h=h->next;
	while(h!=NULL)
	{
		printf("%d  %s",h->id,h->name);
		for(int j=0;j<3;j++)printf("  %.2f",h->score[j]);
		printf("  %.2f",h->ava);
		printf("  %.2f\n",h->sum);
		h=h->next;
	}
}

int link_delete(LNode *head,unsigned int id)
{
	LNode *h=head,*last=head;
	h=h->next;
	while(h!=NULL)
	{
		if(h->id==id)
		{
			last->next=h->next;
			return 1;
		}
		last=h;
		h=h->next;
	}
	return 0;
}

int main()
{
	int n,res;
	unsigned int id;
	while(~scanf("%d",&n))
	{
		LNode *head=link_create(n);
		scanf("%d",&id);
		if(link_delete(head,id))link_print(head);
		else printf("Error\n");
	}
	return 0;
}

