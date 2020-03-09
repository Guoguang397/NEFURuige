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
	int n,cnt=0;
	while(~scanf("%d",&n))
	{
		if(n<0)break;
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->num=n;
		temp->next=head;
		head=temp;
		cnt++;
	}
	while(~scanf("%d",&n))
	{
		if(n>cnt||n<1&&n!=-1)
		{
			printf("Node not found!\n");
			continue;
		}
		else cnt--;
		if(n==1)
		{
			head=head->next;
			break;
		}
		temp=head;
		if(n==-1)
		{
			for(int i=0;i<cnt-1;i++)temp=temp->next;
			temp->next=temp->next->next;
			continue;
		}
		for(int i=0;i<n-2;i++)temp=temp->next;
		temp->next=temp->next->next;
	}
	temp=head;
	while(temp->next!=NULL)
	{
		printf("%d ",temp->num);
		temp=temp->next;
	}
	return 0;
}

