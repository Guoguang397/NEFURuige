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

int cnt=0;
int preorderTraversal(BiNode* node)
{
	if(!node)return 0;
	if(!node->lchild)cnt++;
	preorderTraversal(node->lchild);
	preorderTraversal(node->rchild);
}

int main()
{
	BiNode *bt;
	bt=CreateTree();
	preorderTraversal(bt);
	cout<<cnt;
	return 0;
}

