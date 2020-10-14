#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}LNode;

typedef struct Linkqueue
{
	LNode *front,*rear;
}Queue;

Queue* initQueue()
{
	Queue *q=new Queue;
	q->front=new LNode;
	q->rear=q->front;
	q->front->next=NULL;
	return q;
}

void push(Queue* &t,int data)
{
	LNode *p=new LNode;
	p->data=data;
	p->next=NULL;
	t->rear->next=p;
	t->rear=p;
}

int pop(Queue* &h)
{
	assert(h->front!=h->rear);
	LNode *p=h->front->next;
	int x=p->data;
	h->front->next=h->front->next->next;
	if(h->rear==p)h->rear=h->front;
	delete p;
	return x;
}

int empty(Queue* &h)
{
	return h->front==h->rear;
}

int main()
{
	int n,uq=0,last,t;
	Queue *q[2]={initQueue(),initQueue()};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		last=-1;
		for(int j=0;j<(n-i-1)*2;j++)cout<<" ";
		while(!empty(q[uq]))
		{
			if(last==-1)
			{
				last=pop(q[uq]);
				printf("%2d",last);
				//cout<<last<<" ";
				push(q[!uq],last);
			}
			else
			{
				t=pop(q[uq]);
				//cout<<t+last<<" ";
				printf("%4d",last+t);
				push(q[!uq],t+last);
				last=t;
			}
		}
		//cout<<1<<'\n';
		if(i)printf("%4d  \n",1);
		else printf("%2d  \n",1);
		push(q[!uq],1);
		uq=!uq;
	}
	return 0;
}

