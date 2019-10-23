#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    long long  func(int n);
    while(scanf("%d",&n)!=EOF)
    {
      printf("%lld\n",func(n));
    }
    return 0;
}
//start
long long func(int n)
{
    long long res=1;
    for(int i=2;i<=n;i++)
	{
		res*=i;
	}
	return res;
}
//end