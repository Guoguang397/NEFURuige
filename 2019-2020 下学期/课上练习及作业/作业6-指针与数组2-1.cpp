/*
题目描述：
编写程序完成将一个二维数组中所有异常数据找出转存进入到一个一维数组中。异常数据是各个位上的数字和是偶数，但这个数是奇数的数。比如13,13是奇数，但是1+3=4是偶数。

要求所有过程用指针完成。

提示请合理使用自定义函数
*/
#include <stdio.h>
#include <string.h>
const int N=5;

int check(int *num)
{
	if(*num%2==0)return 0;
	int n=*num,sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	if(sum%2==0)return 1;
	else return 0;
}

int main()
{
	int num[N][N],err[N*N],*ep=err,(*np)[N]=num;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			scanf("%d",*(np+i)+j);
			if(check(*(np+i)+j))
			{
				*ep=*(*(np+i)+j);
				ep++;
			}
		}
	}
	for(int *p=err;p<ep;p++)
	{
		printf("%d ",*p);
	}
	return 0;
}
