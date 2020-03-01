#include <stdio.h>
#include <stdlib.h>
//常规简单方法
int main()
{
    int a,b;
	scanf("%d",&a);
	for(int i=0;i<4;i++)
	{
		b=a%10;
		a/=10;
		b+=3;
		b%=10;
		printf("%d",b);
	}
	return 0;
}

/* 原始文件（数组）
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[4];
	scanf("%s",a);
	for(int i=0;i<4;i++)
	{
		a[i]-='0';
		a[i]+=3;
		a[i]%=10;
	}
	for(int i=3;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}*/