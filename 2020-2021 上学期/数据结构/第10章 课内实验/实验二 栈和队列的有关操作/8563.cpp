#include <bits/stdc++.h>
using namespace std;

int main()
{
	int sta[100],sp=0,t;
	while(cin>>t&&t)sta[sp++]=t;
	while(sp)cout<<sta[--sp]<<" ";
	return 0;
}

