#include <stdio.h>
#include <math.h>

long long gt(int n)
{
    long long res=1;
	for(int i=1;i<=n;i++)
	{
		res*=i;
	}
	return res;
}

int main()
{
	int x,i;
	double sinx,num;
	while(scanf("%d",&x)!=EOF)
	{
		if(x==0)
		{
			printf("0.000000");
			continue;
		}
		i=1;
		sinx=0;
		while(1)
		{
			num=pow(x,2*i-1)/gt(2*i-1);
			if(num<0.00001)break;
			if(i%2==0)sinx-=num;
			else sinx+=num;
			i++;
		}
		printf("%.6f\n",sinx);
	}
    return 0;
}
