#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p=0,fx=1,t;
    vector<int> v;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)v.push_back(i+1);
    for(int i=0;i<n-1;i++)
	{
		t=m-1;
		while(t)
		{
			if(fx&&p+t<v.size())p+=t,t=0;
			else if(!fx&&p-t>=0)p-=t,t=0;
			else if(fx)fx=!fx,t-=v.size()-1-p,p=v.size()-1;
			else fx=!fx,t-=p,p=0;
		}
    	v.erase(v.begin()+p);
    	if(p==v.size())fx=0;
    	if(!fx&&p!=0)p--;
	}
	printf("%d",v[0]);
    return 0;
}

