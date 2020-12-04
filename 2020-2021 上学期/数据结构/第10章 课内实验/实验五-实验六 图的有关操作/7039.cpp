#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}Node;

int m,n;
int *vis;
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
}

void dfs(Node **G,int id)
{
	cout<<G[id]->data<<" ";
	Node *p=G[id]->next;
	while(p)
	{
		if(!vis[p->data])
		{
			vis[p->data]=1;
			dfs(G,p->data);
		}
		p=p->next;
	}
}

int main()
{
	int a,b;
	Node **G;
	cin>>m>>n;
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
	
	for(int i=0;i<m;i++)
	{
		cout<<G[i]->data<<":";
		Node *p=G[i]->next;
		while(p)
		{
			cout<<G[p->data]->data<<" ";
			p=p->next;
		}
		cout<<endl;
	}
	vis=(int*)malloc(m*sizeof(int));
	memset(vis,0,m*sizeof(int));
	for(int i=0;i<m;i++)
	{
		if(!vis[i])dfs(G,i);
	}
	return 0;
}
