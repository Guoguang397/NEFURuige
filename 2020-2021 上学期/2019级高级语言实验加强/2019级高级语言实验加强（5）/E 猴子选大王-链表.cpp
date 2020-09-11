#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    int n,k,p=0,f=0;
    vector<int> v;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)v.push_back(i+1);
    for(int i=0;i<n;i++)
	{
		if(f)printf(" ");
		f=1;
		p=(p+k-1)%v.size();
    	printf("%d",v[p]);
    	v.erase(v.begin()+p);
	}
    return 0;
}
