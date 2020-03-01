#include <stdio.h>
#include <math.h>

double gt(int n)
{
    double res=1;
	for(int i=1;i<=n;i++)
	{
		res*=i;
	}
	return res;
}

int main()
{
	int x,i;
	double ex,num;
	while(scanf("%d",&x)!=EOF)
	{
		if(x==0)
		{
			printf("1.000000");
			continue;
		}
		i=1;
		ex=0;
		while(1)
		{
			num=pow(x,i-1)/gt(i-1);
			ex+=num;
			if(num<0.00001)break;
			i++;
		}
		printf("%f\n",ex);
	}
    return 0;
}
