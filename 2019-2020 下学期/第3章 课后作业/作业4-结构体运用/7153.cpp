#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int num;
	struct Node *next;
};

int main()
{
	struct Node *head;
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
	head=temp;
	head->next=NULL;
	int n,u,v;
	while(~scanf("%d",&n))
	{
		if(n<0)break;
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->num=n;
		temp->next=head;
		head=temp;
	}
	scanf("%d %d",&u,&v);
	while(temp->next!=NULL&&--u)temp=temp->next;
	if(temp->next!=NULL&&u==0)temp->num=v;
	temp=head;
	while(temp->next!=NULL)
	{
		printf("%d ",temp->num);
		temp=temp->next;
	}
	return 0;
}

