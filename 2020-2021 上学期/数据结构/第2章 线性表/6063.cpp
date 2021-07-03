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

void addLink(LNode *h)
{
	LNode *p=h->next;
	if(!p)return;
	while(p->next)
	{
		p->data+=p->next->data;
		p=p->next;
	}
}

int main()
{
	int n;
	cin>>n;
	LNode *h=createLink(n);
	addLink(h);
	printLink(h);
	return 0;
}

