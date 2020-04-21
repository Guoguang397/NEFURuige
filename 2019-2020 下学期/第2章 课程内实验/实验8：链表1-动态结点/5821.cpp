#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}LNode; 

LNode* link_create(int num)
{
	int data;
	LNode *head=(LNode *)malloc(sizeof(LNode)),*p;
	p=head;
	head->next=NULL;
	for(int i=0;i<num;i++)
	{
		scanf("%d",&data);
		p->next=(LNode *)malloc(sizeof(LNode));
		p=p->next;
		p->data=data;
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
		printf("%d  ",h->data);
		h=h->next;
	}
}

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		LNode *head=link_create(n);
		link_print(head);
	}
	return 0;
}

