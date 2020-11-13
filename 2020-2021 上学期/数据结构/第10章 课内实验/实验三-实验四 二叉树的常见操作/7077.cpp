#include <bits/stdc++.h>
using namespace std;

struct BiNode
{
    char data,ltag,rtag;
	struct BiNode *lchild,*rchild;
};

BiNode* CreateTree()
{
	char c;
	cin>>c;
	if(c=='@')return NULL;
	else
	{
		BiNode *node=new BiNode;
		node->data=c;
		node->lchild=CreateTree();
		node->rchild=CreateTree();
		return node;
	}
}

void LayerTraversal(BiNode* p)
{
	if(!p)return;
	queue<BiNode*> q;
	q.push(p);
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		cout<<p->data;
		if(p->lchild)q.push(p->lchild);
		if(p->rchild)q.push(p->rchild);
	}
}

int main()
{
	BiNode *bt;
	bt=CreateTree();
	LayerTraversal(bt);
	return 0;
}

