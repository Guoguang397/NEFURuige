/*
题目描述：
编写程序创建不确定个数的带头结点的链表，并完成输出。要求结点至少有一个数据域值
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
	struct Node* next;
	int num;
};

struct Node* link_create(int n)
{
	struct Node* head=(struct Node*)malloc(sizeof(struct Node));
	struct Node* p=head;
	head->next=NULL;
	for(int i=0;i<n;i++)
	{
		p->next=(struct Node*)malloc(sizeof(struct Node));
		p=p->next;
		p->num=i;
		p->next=NULL;
	}
	return head;
}

void link_print(struct Node* head)
{
	if(head->next==NULL)
	{
		printf("Link is empty!");
		return;
	}
	head=head->next;
	while(1)
	{
		printf("%d ",head->num);
		if(head->next!=NULL)head=head->next;
		else break;
	}
}

int main()
{
	int n;
	printf("Enter the number of node(s): ");
	scanf("%d",&n);
	struct Node* head=link_create(n);
	link_print(head);
	return 0;
}

