#include <bits/stdc++.h>
using namespace std;

int arr[2][100],cur=0;
void merge(int l,int r)
{
	if(l>=r)return;
	int mid=(l+r)/2;
	int p1=l,p2=mid+1,cp=l;
	while(p1<=mid&&p2<=r)
	{
		if(arr[cur][p1]>=arr[cur][p2])arr[!cur][cp++]=arr[cur][p2++];
		else arr[!cur][cp++]=arr[cur][p1++];
	}
	while(p1<=mid)arr[!cur][cp++]=arr[cur][p1++];
	while(p2<=r)arr[!cur][cp++]=arr[cur][p2++];
	for(int i=l;i<=r;i++)arr[cur][i]=arr[!cur][i];
}

void mergeSort(int l,int r)
{
	if(l>=r)return;
	int mid = (l+r)/2;
	mergeSort(l,mid);
	mergeSort(mid+1,r);
	merge(l,r);
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[cur][i];
	mergeSort(0,n-1);
	for(int i=0;i<n;i++)cout<<arr[cur][i]<<" ";
	return 0;
}

