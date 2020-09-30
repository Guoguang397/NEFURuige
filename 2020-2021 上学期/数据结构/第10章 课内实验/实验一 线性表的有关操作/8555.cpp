#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	struct node* next;
}LNode;

LNode* createLink(int n)
{
	LNode *h=new LNode,*p,*node;
	h->next=NULL;
	p=h;
	while(n--)
	{
		node=new LNode;
		cin>>node->data;
		node->next=NULL;
		p->next=node;
		p=node;
	}
	return h;
}

void printLink(LNode* h)
{
	LNode *p=h->next;
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

void insertToLink(LNode* h,int data)
{
	LNode *p=h,*node=new LNode;
	node->data=data;
	while(p->next!=NULL&&p->next->data<data)p=p->next;
	node->next=p->next;
	p->next=node;
}

int main()
{
	int n;
	LNode *h=createLink(0);
	while(cin>>n&&n)insertToLink(h,n);
	printLink(h);
	return 0;
}

