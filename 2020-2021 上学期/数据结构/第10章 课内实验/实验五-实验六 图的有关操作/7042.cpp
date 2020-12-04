#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}Node;

int m,n;
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
		addArc(G,b,a);
	}
	
	int *vis=(int*)malloc(m*sizeof(int));
	memset(vis,0,m*sizeof(int));
	stack<Node *> s;
	for(int i=0;i<m;i++)
	{
		if(!vis[i])
		{
			cout<<"v"<<G[i]->data<<" ";
			vis[i]=1;
			s.push(G[i]->next);
			while(!s.empty())
			{
				Node *p=s.top();
				s.pop();
				if(!p)continue;
				while(p&&vis[p->data])p=p->next;
				if(p)
				{
					cout<<"v"<<G[p->data]->data<<" ";
					vis[p->data]=1;
					s.push(p->next);
					s.push(G[p->data]->next);
				}
			}
		}
	}
	return 0;
}
