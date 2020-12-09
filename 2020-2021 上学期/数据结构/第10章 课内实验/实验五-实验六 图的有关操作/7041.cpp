#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}Node;

int m,n;
int *del,*rd;
int getIndex(Node **G,int data)
{
	for(int i=0;i<m;i++)
	{
		if(G[i]->data==data)return i;
	}
}

void addArc(Node **G,int a,int b)
{
	Node *p=new Node;
	p->data=getIndex(G,b);
	int id=getIndex(G,a);
	p->next=G[id]->next;
	G[id]->next=p;
	rd[p->data]++;
}

stack<int>s;
int delNode(Node** G,int id)
{
	cout<<"v"<<G[id]->data<<" ";
	Node *p=G[id]->next;
	while(p)
	{
		rd[p->data]--;
		if(!rd[p->data])
		{
			del[p->data]=1;
			s.push(p->data);
		}
		p=p->next;
	}
}

int main()
{
	int a,b;
	Node **G;
	cin>>m>>n;
	rd=(int*)malloc(m*sizeof(int));
	memset(rd,0,m*sizeof(int));
	G=(Node**)malloc(m*sizeof(Node*));
	for(int i=0;i<m;i++)
	{
		G[i]=new Node;
		cin>>G[i]->data;
		G[i]->next=NULL;
	}
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		addArc(G,a,b);
	}
	del=(int*)malloc(m*sizeof(int));
	memset(del,0,m*sizeof(int));
	for(int i=0;i<m;i++)
	{
		if(!rd[i])
		{
			del[i]=1;
			s.push(i);
		}
	}
	while(!s.empty())
	{
		int p=s.top();
		s.pop();
		delNode(G,p);
	}
	return 0;
}
