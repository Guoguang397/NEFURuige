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

int ok=0;
void dfs(Node **G,int id,int tar)
{
	if(id==tar)
	{
		ok=1;
		return;
	}
	Node *p=G[id]->next;
	while(p)
	{
		if(!vis[p->data])
		{
			vis[p->data]=1;
			dfs(G,p->data,tar);
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
		G[i]->data=i+1;
		G[i]->next=NULL;
	}
	for(int i=0;i<n;i++)
	{
		char c;
		cin>>a>>c>>b;
		addArc(G,a,b);
	}
	cin>>a>>b;
	
	vis=(int*)malloc(m*sizeof(int));
	memset(vis,0,m*sizeof(int));
	dfs(G,getIndex(G,a),getIndex(G,b));
	if(ok)cout<<1;
	else cout<<0;
	return 0;
}
