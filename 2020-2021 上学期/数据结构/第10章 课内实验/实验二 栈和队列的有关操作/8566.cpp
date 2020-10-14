#include <bits/stdc++.h>
using namespace std;

int main()
{
	int sta[100],sp=0,n,t,nn;
	cin>>n>>t;
	nn=n;
	while(n)
	{
		sta[sp++]=n%t;
		n/=t;
	}
	cout<<nn<<"(10)=";
	while(sp)cout<<sta[--sp];
	cout<<"("<<t<<")";
	return 0;
}

