#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}LNode;

void push(LNode *&s,int data)
{
	LNode *tmp=new LNode;
	tmp->next=s;
	tmp->data=data;
	s=tmp;
}

void pop(LNode *&s)
{
	cout<<s->data<<" ";
	s=s->next;
}

int main()
{
	LNode *sta=NULL;
	int t;
	while(cin>>t&&t)push(sta,t);
	while(sta)pop(sta);
	return 0;
}

