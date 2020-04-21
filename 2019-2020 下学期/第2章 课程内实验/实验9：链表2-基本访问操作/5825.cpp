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

void link_search_previous(LNode *head,int data)
{
	LNode *h=head,*prev=head;
	h=h->next;
	while(h!=NULL)
	{
		if(h->data==data)
		{
			if(prev==head)printf("没有前驱\n");
			else printf("%d\n",prev->data);
			return;
		}
		prev=h;
		h=h->next;
	}
	printf("x不存在\n");
}

int main()
{
	int n,pos;
	while(~scanf("%d",&n))
	{
		LNode *head=link_create(n);
		scanf("%d",&n);
		link_search_previous(head,n);
	}
	return 0;
}

