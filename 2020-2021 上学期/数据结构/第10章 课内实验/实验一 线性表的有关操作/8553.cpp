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

int main()
{
	int n;
	LNode *h=createLink();
	printLink(h);
	return 0;
}

