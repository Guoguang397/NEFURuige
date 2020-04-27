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

void link_find(LNode *head,unsigned int id)
{
	LNode *h=head;
	int cnt=0;
	h=h->next;
	while(h!=NULL)
	{
		cnt++;
		if(h->id==id)
		{
			printf("%d  ",cnt);
			printf("%d  %s",h->id,h->name);
			for(int j=0;j<3;j++)printf("  %.2f",h->score[j]);
			printf("  %.2f",h->ava);
			printf("  %.2f\n",h->sum);
			return;
		}
		h=h->next;
	}
	printf("0\n");
}

int main()
{
	int n;
	unsigned int id;
	while(~scanf("%d",&n))
	{
		LNode *head=link_create(n);
		scanf("%d",&id); 
		link_find(head,id);
	}
	return 0;
}

