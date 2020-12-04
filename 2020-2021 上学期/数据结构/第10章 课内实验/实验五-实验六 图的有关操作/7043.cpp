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
	queue<int> q;
	for(int i=0;i<m;i++)
	{
		if(!vis[i])
		{
			q.push(i);
			vis[i]=1;
			cout<<"v"<<G[i]->data<<" ";
			while(!q.empty())
			{
				int id=q.front();
				q.pop();
				Node *p=G[id]->next;
				while(p)
				{
					if(!vis[p->data])
					{
						vis[p->data]=1;
						cout<<"v"<<G[p->data]->data<<" ";
						q.push(p->data);
					}
					p=p->next;
				}
			}
		}
	}
	return 0;
}
