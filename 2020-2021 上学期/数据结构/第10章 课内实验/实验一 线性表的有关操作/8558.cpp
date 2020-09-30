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

LNode* separateLink(LNode* h)
{
	LNode *h2=new LNode,*p=h,*del,*h2p=h2;;
	h2->next=NULL;
	while(p->next!=NULL)
	{
		if(p->next->data%2==0)
		{
			del=p->next;
			p->next=p->next->next;
			del->next=NULL;
			h2p->next=del;
			h2p=del;
		}
		else p=p->next;
	}
	return h2;
}

int main()
{
	int n;
	LNode *h1=createLink();
	LNode *h2=separateLink(h1);
	printLink(h1);
	cout<<endl;
	printLink(h2);
	return 0;
}

