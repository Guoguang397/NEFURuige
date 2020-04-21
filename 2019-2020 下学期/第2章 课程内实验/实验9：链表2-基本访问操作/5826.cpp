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

int link_count_even(LNode *head,int data)
{
	int cnt=0;
	LNode *h=head;
	h=h->next;
	while(h!=NULL)
	{
		if(h->data%2==0)cnt++;
		h=h->next;
	}
	return cnt;
}

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		LNode *head=link_create(n);
		n=link_count_even(head,n);
		printf("%d\n",n);
	}
	return 0;
}

