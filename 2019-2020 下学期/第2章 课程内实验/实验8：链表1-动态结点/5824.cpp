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

int link_search(LNode *head,int data)
{
	int cnt=0;
	LNode *h=head;
	h=h->next;
	while(h!=NULL)
	{
		cnt++;
		if(h->data==data)return cnt;
		h=h->next;
	}
	return 0;
}

int main()
{
	int n,pos;
	while(~scanf("%d",&n))
	{
		LNode *head=link_create(n);
		scanf("%d",&n);
		pos=link_search(head,n);
		printf("%d",pos);
		if(pos)printf(" %d\n",n);
	}
	return 0;
}

