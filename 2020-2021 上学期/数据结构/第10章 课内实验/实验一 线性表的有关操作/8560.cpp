#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int num,exp;
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
		scanf("%d,%d",&node->num,&node->exp);
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
		cout<<p->num;
		if(p->exp)
		{
			if(p->exp>1)cout<<"*x^"<<p->exp;
			else cout<<"*x";
		}
		cout<<" ";
		p=p->next;
	}
}

void addLink(LNode* h1,LNode* h2)
{
	LNode *p1=h1->next,*p2=h2->next,*p=h1,*q,*del;
	while(p1&&p2)
	{
		if(p1->exp<p2->exp)
		{
			p=p1;
			p1=p1->next;
		}
		else if(p1->exp>p2->exp)
		{
			q=p2->next;
			p2->next=p->next;
			p->next=p2;
			p=p2;
			p2=q;
		}
		else
		{
			if(p1->num+p2->num)
			{
				p1->num+=p2->num;
				p=p1;
				p1=p1->next;
				del=p2;
				p2=p2->next;
				delete del;
			}
			else
			{
				p->next=p1->next;
				del=p1;
				p1=p1->next;
				delete del;
				del=p2;
				p2=p2->next;
				delete del;
			}
		}
	}
	if(p2)p->next=p2;
	delete h2;
}

int main()
{
	int n;
	cin>>n;
	LNode *h1=createLink(n);
	cin>>n;
	LNode *h2=createLink(n);
	addLink(h1,h2);
	printLink(h1);
	return 0;
}

