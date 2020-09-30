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

void reverseLink(LNode* h)
{
	LNode *p=h->next,*q=p;
	h->next=NULL;
	while(p)
	{
		q=p;
		p=p->next;
		q->next=h->next;
		h->next=q;
	}
}

int main()
{
	int n;
	cin>>n;
	LNode *h=createLink(n);
	printLink(h);
	cout<<endl;
	reverseLink(h);
	printLink(h);
	return 0;
}

