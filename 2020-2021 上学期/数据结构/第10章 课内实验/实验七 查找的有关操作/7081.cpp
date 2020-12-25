#include <bits/stdc++.h>
using namespace std;

typedef struct BSTNode
{
    int data;
    struct BSTNode *lchild;
    struct BSTNode *rchild;
}BSTNode;

BSTNode *T=NULL,*p;
void insertBST(BSTNode *&T,int data)
{
	if(!T)
	{
		BSTNode *node=new BSTNode;
		node->data=data;
		node->lchild=node->rchild=NULL;
		T=node;
	}
	else if(data<T->data)insertBST(T->lchild,data);
	else insertBST(T->rchild,data);
}

BSTNode* queryBST(BSTNode *T,int data)
{
	if(!T||T->data==data)return T;
	else if(data<T->data)return queryBST(T->lchild,data);
	else return queryBST(T->rchild,data);
}

void inorderTraversal(BSTNode *p)
{
	if(p)
	{
		inorderTraversal(p->lchild);
		cout<<p->data<<" ";
		inorderTraversal(p->rchild);
	}
}

void deleteBSTNode(BSTNode *&T,int data)
{
	BSTNode *p=T,*f=NULL,*preLmax,*lmax,*q;
	while(p)
	{
		if(p->data==data)break;
		f=p;
		if(data<T->data)p=p->lchild;
		else p=p->rchild;
	}
	if(!p)return;
	q=preLmax=p;
	if(p->lchild&&p->rchild)
	{
		lmax=p->lchild;
		while(lmax->rchild)
		{
			preLmax=lmax;
			lmax=lmax->rchild;
		}
		p->data=lmax->data;
		if(preLmax!=p)preLmax->rchild=lmax->lchild;
		else preLmax->lchild=lmax->lchild;
		delete lmax;
		return;
	}
	else if(!p->lchild&&p->rchild)p=p->rchild;
	else if(!p->rchild&&p->lchild)p=p->lchild;
	else p=NULL;
	if(!f)T=p;
	else if(q==f->lchild)f->lchild=p;
	else f->rchild=p;
	delete q;
}

int main()
{
	T=NULL;
	int num;
	while(cin>>num&&num)insertBST(T,num);
	inorderTraversal(T);
	cout<<endl;
	cin>>num;
	if(queryBST(T,num))cout<<"该数存在\n";
	else cout<<"该数不存在\n";
	cin>>num;
	deleteBSTNode(T,num);
	inorderTraversal(T);
	return 0;
}
