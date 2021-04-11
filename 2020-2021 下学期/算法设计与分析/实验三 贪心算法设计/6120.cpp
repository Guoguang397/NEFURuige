#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,num[100];
	cin>>n;
	for(int i=0;i<n;i++)cin>>num[i];
	sort(num,num+n);
	int sum=0,ct=0;
	for(int i=0;i<n;i++)
	{
		ct+=num[i];
		sum+=ct;
	}
	printf("%.2f",sum/(double)n);
	return 0;
}

