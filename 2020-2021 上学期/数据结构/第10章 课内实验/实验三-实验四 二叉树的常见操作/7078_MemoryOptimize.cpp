#include <bits/stdc++.h>
using namespace std;

struct BiNode
{
    char data,tag;
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

void setTag(char &tag,char pos,char data)
{
	if(pos=='l'&&data)tag|=1<<1;
	else if(pos=='l'&&!data)tag&=0xFF-1<<1;
	else if(pos=='r'&&data)tag|=1;
	else tag&=0xFF-1;
}

int readTag(char tag,char pos)
{
	if(pos=='r')return tag&1;
	else return tag&(1<<1);
}

BiNode *pre=NULL;
void inorderThreadTree(BiNode* p)
{
	if(!p)return;
	inorderThreadTree(p->lchild);
	if(p->lchild)setTag(p->tag,'l',0);
	else
	{
		setTag(p->tag,'l',1);
		p->lchild=pre;
	}
	if(pre)
	{
		if(pre->rchild)setTag(pre->tag,'r',0);
		else
		{
			setTag(pre->tag,'r',1);
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
		while(!readTag(p->tag,'l'))p=p->lchild;
		cout<<p->data;
		while(readTag(p->tag,'r')&&p->rchild)
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

