/*
��Ŀ������
��дһ��������������������Լ���빫��������⡣
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
