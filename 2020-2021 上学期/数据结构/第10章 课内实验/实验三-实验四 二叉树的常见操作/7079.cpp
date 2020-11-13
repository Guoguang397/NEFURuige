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

void inorderTraversal(BiNode* node)
{
	stack<BiNode*>s;
	BiNode *p=node;
	while(p||!s.empty())
	{
		if(p)
		{
			s.push(p);
			p=p->lchild;
		}
		else
		{
			cout<<s.top()->data;
			p=s.top()->rchild;
			s.pop();
		}
	}
}

int main()
{
	BiNode *bt;
	bt=CreateTree();
	inorderTraversal(bt);
	return 0;
}

