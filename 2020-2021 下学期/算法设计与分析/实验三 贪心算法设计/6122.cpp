#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,a,cnt=0;
	cin>>k>>n;
	int f=k;
	for(int i=0;i<=n;i++)
	{
		cin>>a;
		f-=a;
		if(f<0)
		{
			f=k-a;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

