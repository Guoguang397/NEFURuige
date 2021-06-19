#include <bits/stdc++.h>
using namespace std;

int main()
{
	int *p=new int[20];
	p[0]=p[1]=1;
	cout<<1<<" "<<1<<endl;
	for(int i=2;i<20;i++)
	{
		p[i]=p[i-1]+p[i-2];
		cout<<p[i];
		if(i%2)cout<<endl;
		else cout<<" ";
	}
	delete[] p;
	return 0;
}

