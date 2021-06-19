#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	char c;
	cin>>a>>c;
	void *p=&a;
	cout<<*(int*)p<<endl;
	p=&c;
	cout<<*(char*)p;
	return 0;
}

