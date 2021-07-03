#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;
void CreateList(LinkList & L, int n)
{
    LinkList h=new LNode,node;
    h->next=NULL;
    while(n--)
    {
    	node=new LNode;
    	node->next=h->next;
    	scanf("%d",&node->data);
    	h->next=node;
	}
    L=h;
}
void ShowList(LinkList L)
{
    LinkList p=L->next;
    while(p)
    {
    	printf("%d ",p->data);
    	p=p->next;
	}
}
int main()
{
    LinkList L=NULL;
    int n;
    scanf("%d",&n);
    CreateList(L,n);
    ShowList(L);
    return 0;
}
