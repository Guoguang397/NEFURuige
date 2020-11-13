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
	if(c=='*')return NULL;
	else
	{
		BiNode *node=new BiNode;
		node->data=c;
		node->lchild=CreateTree();
		node->rchild=CreateTree();
		return node;
	}
}

int FindNode(BiNode* node,char c)
{
	if(!node)return 0;
	if(node->data==c)return 1;
	if(FindNode(node->lchild,c)||FindNode(node->rchild,c))
	{
		cout<<node->data<<' ';
		return 1;
	}
	else return 0;
}

int main()
{
	BiNode *bt;
	bt=CreateTree();
	char c;
	cin>>c;
	if(bt&&bt->data==c)cout<<"没有祖先结点";
	else if(!FindNode(bt,c))cout<<c<<"不存在";
	return 0;
}

