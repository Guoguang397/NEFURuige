#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num,arr[15]={0},pos,npos;
	while(cin>>num&&num)
	{
		pos=num%13;
		if(!arr[pos])arr[pos]=num;
		else
		{
			for(int i=1;i<15;i++)
			{
				npos=(pos+i)%15;
				if(!arr[npos])
				{
					arr[npos]=num;
					break;
				}
			}
		}
	}
	for(int i=0;i<15;i++)cout<<i<<" "<<(arr[i]?arr[i]:-1)<<endl;
	return 0;
}

