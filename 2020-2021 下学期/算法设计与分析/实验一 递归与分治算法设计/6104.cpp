#include <bits/stdc++.h>
using namespace std;

int arr[100];
int getMax(int l,int r)
{
	if(l==r)return arr[l];
	int mid = (l+r)/2;
	return max(getMax(l,mid),getMax(mid+1,r));
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	cout<<getMax(0,n-1);
	return 0;
}

