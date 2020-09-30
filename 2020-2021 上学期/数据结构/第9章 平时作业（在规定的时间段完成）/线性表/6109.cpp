#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	struct node* next;
}LNode;

LNode* createLink()
{
	LNode *h=new LNode,*p,*node;
	h->next=NULL;
	p=h;
	while(1)
	{
		node=new LNode;
		cin>>node->data;
		if(node->data==0)
		{
			delete node;
			break;
		}
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

void mergeLink(LNode *h1,LNode *h2)
{
	LNode *p1=h1->next,*p2=h2->next,*p=h1,*q;
	while(p1&&p2)
	{
		if(p1->data<p2->data)
		{
			p=p1;
			p1=p1->next;
		}
		else if(p1->data>p2->data)
		{
			q=p2->next;
			p2->next=p->next;
			p->next=p2;
			p=p2;
			p2=q;
		}
		else
		{
			p=p1;
			q=p2;
			p1=p1->next;
			p2=p2->next;
			delete q;
		}
	}
	if(p2)p->next=p2;
	delete h2;
}

int main()
{
	int n;
	LNode *h1=createLink(),*h2=createLink();
	mergeLink(h1,h2);
	printLink(h1);
	return 0;
}

