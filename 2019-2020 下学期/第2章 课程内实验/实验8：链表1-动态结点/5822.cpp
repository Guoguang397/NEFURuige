#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}LNode; 

LNode* link_create_head(int num)
{
	int data;
	LNode *head=(LNode *)malloc(sizeof(LNode)),*p;
	head->next=NULL;
	for(int i=0;i<num;i++)
	{
		scanf("%d",&data);
		p=(LNode *)malloc(sizeof(LNode));
		p->next=head->next;
		p->data=data;
		head->next=p;
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
	printf("\n");
}

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		LNode *head=link_create_head(n);
		link_print(head);
	}
	return 0;
}

