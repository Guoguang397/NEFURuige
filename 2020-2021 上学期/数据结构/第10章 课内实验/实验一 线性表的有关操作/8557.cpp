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

void mergeLink(LNode *h1,LNode *h2)
{
	LNode *p1=h1->next,*p2=h2->next,*q;
	h1->next=NULL;
	while(p1&&p2)
	{
		if(p1->data<=p2->data)
		{
			q=p1->next;
			p1->next=h1->next;
			h1->next=p1;
			p1=q;
		}
		else
		{
			q=p2->next;
			p2->next=h1->next;
			h1->next=p2;
			p2=q;
		}
	}
	while(p1)
	{
		q=p1->next;
		p1->next=h1->next;
		h1->next=p1;
		p1=q;
	}
	while(p2)
	{
		q=p2->next;
		p2->next=h1->next;
		h1->next=p2;
		p2=q;
	}
}

int main()
{
	int n;
	LNode *h1=createLink(0),*h2=createLink(0);
	while(cin>>n&&n)insertToLink(h1,n);
	while(cin>>n&&n)insertToLink(h2,n);
	mergeLink(h1,h2);
	printLink(h1);
	return 0;
}

