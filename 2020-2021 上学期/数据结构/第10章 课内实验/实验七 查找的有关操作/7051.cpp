#include <bits/stdc++.h>
using namespace std;

int getMod(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			i=1;
			n--;
		}
	}
	return n;
}

int main()
{
	int m,p,num,*arr,pos,npos;
	cin>>m;
	p=getMod(m);
	arr=new int[m];
	memset(arr,0,m*sizeof(int));
	while(cin>>num&&num)
	{
		pos=num%p;
		if(!arr[pos])arr[pos]=num;
		else
		{
			for(int i=1;i<m;i++)
			{
				npos=(pos+i)%m;
				if(!arr[npos])
				{
					arr[npos]=num;
					break;
				}
			}
		}
	}
	for(int i=0;i<m;i++)cout<<i<<"  ";
	cout<<endl;
	for(int i=0;i<m;i++)cout<<arr[i]<<"  ";
	return 0;
}

