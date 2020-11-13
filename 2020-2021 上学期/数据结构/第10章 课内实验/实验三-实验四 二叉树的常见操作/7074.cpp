#include <bits/stdc++.h>
using namespace std;

struct BiNode
{
    char data;
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

int GetDepth(BiNode* node)
{
	if(!node)return 0;
	return max(GetDepth(node->lchild),GetDepth(node->rchild))+1;
}

int main()
{
	BiNode *bt;
	bt=CreateTree();
	cout<<GetDepth(bt);
	return 0;
}

