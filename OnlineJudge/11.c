#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int a[5],sum;
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	sort(a,a+5);
	sum += a[4];
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	sort(a,a+5);
	sum += a[4];
	printf("%d",sum);
	while(scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4])!=-1)
	{
		sum = 0;
		sort(a,a+5);
		sum += a[4];
		scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
		sort(a,a+5);
		sum += a[4];
		printf("\n%d",sum);
	}
	return 0;
}