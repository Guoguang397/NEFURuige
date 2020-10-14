#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}LNode;

LNode* initQueue()
{
	LNode *h=new LNode;
	h->next=NULL;
	return h;
}

void push(LNode* &t,int data)
{
	LNode *p=new LNode;
	p->data=data;
	p->next=NULL;
	t->next=p;
	t=p;
}

int pop(LNode* &h)
{
	LNode *p=h->next;
	int x=p->data;
	h=h->next;
	delete p;
	return x;
}

int main()
{
	LNode *h,*t;
	h=t=initQueue();
	int n;
	while(cin>>n&&n)push(t,n);
	while(h!=t)cout<<pop(h)<<" ";
	return 0;
}

