#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n=0,num[100],tmp;
	while(cin>>num[n]&&num[n++]);
	n--;
	for(int i=1;i<n;i++)
	{
		tmp=num[i];
		int j;
		for(j=i-1;j>=0;j--)
		{
			if(tmp<num[j])num[j+1]=num[j];
			else break;
		}
		num[j+1]=tmp;
	}
	for(int i=0;i<n;i++)cout<<num[i]<<" ";
	return 0;
}

