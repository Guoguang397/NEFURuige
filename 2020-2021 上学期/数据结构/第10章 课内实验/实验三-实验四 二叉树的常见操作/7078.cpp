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

BiNode *pre=NULL;
void inorderThreadTree(BiNode* p)
{
	if(!p)return;
	inorderThreadTree(p->lchild);
	if(p->lchild)p->ltag=0;
	else
	{
		p->ltag=1;
		p->lchild=pre;
	}
	if(pre)
	{
		if(pre->rchild)pre->rtag=0;
		else
		{
			pre->rtag=1;
			pre->rchild=p;
		}
	}
	pre=p;
	inorderThreadTree(p->rchild);
}

void inorderTraversalThreadTree(BiNode* p)
{
	if(!p)return;
	while(p)
	{
		while(!p->ltag)p=p->lchild;
		cout<<p->data;
		while(p->rtag&&p->rchild)
		{
			p=p->rchild;
			cout<<p->data;
		}
		p=p->rchild;
	}
}

int main()
{
	BiNode *bt;
	bt=CreateTree();
	inorderThreadTree(bt);
	inorderTraversalThreadTree(bt);
	return 0;
}

