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

int postorderTraversal(BiNode* node)
{
	if(!node)return 0;
	postorderTraversal(node->lchild);
	postorderTraversal(node->rchild);
	cout<<node->data;
}

int main()
{
	BiNode *bt;
	bt=CreateTree();
	postorderTraversal(bt);
	return 0;
}

