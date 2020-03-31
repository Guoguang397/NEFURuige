/*
题目描述：
编写一个函数完成两个整数最大公约数与公倍数的求解。
*/
#include <stdio.h>
#include <string.h>

void calc(int a,int b,int *gcd,int *lcm)
{
	int product=a*b,ys;
	while(b!=0)
	{
		ys=a%b;
		a=b;
		b=ys;
	}
	*gcd=a;
	*lcm=product/(*gcd);
}

int main()
{
	int a,b,gcd,lcm;
	scanf("%d %d",&a,&b);
	calc(a,b,&gcd,&lcm);
	printf("%d %d",gcd,lcm);
	return 0;
}
