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
	}
	
	for(int i=0;i<m;i++)
	{
		cout<<G[i]->data<<":";
		int rd=0,cd=0;
		Node *p=G[i];
		while(p=p->next)cd++;
		for(int j=0;j<m;j++)
		{
			if(i==j)continue;
			p=G[j];
			while(p=p->next)if(p->data==i)rd++;
		}
		cout<<rd<<" "<<cd<<" "<<rd+cd<<endl;
	}
	return 0;
}
