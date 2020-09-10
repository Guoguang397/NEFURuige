#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
	struct node *next;
}Node; 

Node* link_create(int num)
{
	int data;
	Node *head=(Node *)malloc(sizeof(Node)),*p;
	p=head;
	head->next=NULL;
	for(int i=0;i<num;i++)
	{
		scanf("%d",&data);
		p->next=(Node *)malloc(sizeof(Node));
		p=p->next;
		p->data=data;
		p->next=NULL;
	}
	return head;
}

void link_print(Node *head)
{
	Node *h=head;
	h=h->next;
	while(h!=NULL)
	{
		if(h!=head->next)printf(" ");
		printf("%d",h->data);
		h=h->next;
	}
}

void link_insert(Node *head,int data)
{
	Node *h=head,*prev=head;
	h=h->next;
	while(h!=NULL)
	{
		if(h->data>data)
		{
			prev->next=(Node *)malloc(sizeof(Node));
			prev->next->data=data;
			prev->next->next=h;
			return;
		}
		prev=h;
		h=h->next;
	}
	prev->next=(Node *)malloc(sizeof(Node));
	prev->next->data=data;
	prev->next->next=NULL;
}

int main()
{
	int n;
	scanf("%d",&n);
	Node *head=link_create(n);
	scanf("%d",&n);
	link_insert(head,n);
	link_print(head);
	return 0;
}
