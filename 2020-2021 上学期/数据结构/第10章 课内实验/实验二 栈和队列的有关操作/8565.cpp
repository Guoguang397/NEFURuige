#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,q[100],front=0,rear=0,empty=1;
	while(cin>>n&&n)
	{
		if(!empty&&front==rear)break;
		q[front]=n;
		front=(front+1)%100;
		empty=0;
	}
	while(!empty)
	{
		cout<<q[rear]<<" ";
		rear=(rear+1)%100;
		if(rear==front)empty=1;
	}
	return 0;
}

