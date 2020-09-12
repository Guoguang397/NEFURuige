#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[5];
	while(cin>>a[0])
	{
		for(int i=1;i<5;i++)cin>>a[i];
		sort(a,a+5);
		for(int i=0;i<4;i++)cout<<a[i]<<" ";
		cout<<a[4]<<endl;
	}
	return 0;
}

