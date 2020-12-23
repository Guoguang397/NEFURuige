#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100],n=0,f;
	while(cin>>arr[++n]&&arr[n]);
	cin>>f;
	sort(arr+1,arr+n);
	int l=1,r=n,mid,cnt=0;
	while(l<=r)
	{
		mid=(l+r)/2;
		cnt++;
		if(arr[mid]==f)
		{
			cout<<mid<<" "<<cnt;
			return 0;
		}
		else if(f<arr[mid])r=mid-1;
		else l=mid+1;
	}
	cout<<"0 "<<cnt;
	return 0;
}

