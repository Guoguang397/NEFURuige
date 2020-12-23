#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

int main()
{
	int pos,num;
	Node *arr[13];
	for(int i=0;i<13;i++)arr[i]=new Node{0,NULL};
	while(cin>>num&&num)
	{
		pos=num%13;
		Node *p=new Node;
		p->data=num;
		p->next=arr[pos]->next;
		arr[pos]->next=p;
	}
	for(int i=0;i<13;i++)
	{
		cout<<i<<":";
		Node *p=arr[i]->next;
		while(p)
		{
			cout<<p->data<<" ";
			p=p->next;
		}
		cout<<endl;
	}
	return 0;
}

