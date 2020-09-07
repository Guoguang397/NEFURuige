#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,ans;
	while(cin>>n)
	{
		ans=1;
		while(n>0)
		{
			ans*=n%10;
			n/=10;
		}
		cout<<ans<<endl;
	}
	return 0;
}