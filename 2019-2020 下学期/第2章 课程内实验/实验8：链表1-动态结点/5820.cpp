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

int link_insert(LNode *head,int num,int pos)
{
	int data;
	LNode *p,*tmp;
	p=head;
	while(pos)
	{
		p=p->next;
		if(p==NULL)return 0;
		pos--;
	}
	for(int i=0;i<num;i++)
	{
		scanf("%d",&data);
		tmp=(LNode *)malloc(sizeof(LNode));
		tmp->next=p->next;
		tmp->data=data;
		p->next=tmp;
		p=p->next;
	}
	return 1;
}

void link_print(LNode *head)
{
	printf("Head:");
	LNode *h=head;
	h=h->next;
	while(h!=NULL)
	{
		printf("->%d",h->data);
		h=h->next;
	}
}

int main()
{
	LNode *head=link_create(3);
	link_insert(head,1,2);
	link_print(head);
	return 0;
}

