#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}LNode; 

LNode* link_create()
{
	int data;
	LNode *head=(LNode *)malloc(sizeof(LNode)),*p;
	p=head;
	head->next=NULL;
	while(~scanf("%d",&data)&&data)
	{
		p->next=(LNode *)malloc(sizeof(LNode));
		p=p->next;
		p->data=data;
		p->next=NULL;
	}
	return head;
}

void link_print_and_count(LNode *head)
{
	int num=0;
	LNode *h=head;
	h=h->next;
	while(h!=NULL)
	{
		printf("%d  ",h->data);
		num++;
		h=h->next;
	}
	printf("\n%d\n",num);
}

int main()
{
	LNode *head=link_create();
	link_print_and_count(head);
	return 0;
}

