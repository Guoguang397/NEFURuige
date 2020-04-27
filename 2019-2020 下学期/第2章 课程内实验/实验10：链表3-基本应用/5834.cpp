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

LNode* link_create_empty()
{
	LNode *head=(LNode *)malloc(sizeof(LNode)),*p;
	head->next=NULL;
	return head;
}

void link_print(LNode *h)
{
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

void link_insert(LNode *head)
{
	LNode *h=head,*last=head,*p=(LNode *)malloc(sizeof(LNode));
	scanf("%d %s",&p->id,p->name);
	p->sum=0;
	for(int j=0;j<3;j++)
	{
		scanf("%lf",&p->score[j]);
		p->sum+=p->score[j];
	}
	p->ava=p->sum/3;
	p->next=NULL;
	h=h->next;
	while(h!=NULL)
	{
		if(h->sum<p->sum)
		{
			last->next=p;
			p->next=h;
			return;
		}
		last=h;
		h=h->next;
	}
	last->next=p;
}

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		LNode *head=link_create_empty();
		for(int i=0;i<n;i++)
		{
			link_insert(head);
		}
		link_print(head);
	}
	return 0;
}

