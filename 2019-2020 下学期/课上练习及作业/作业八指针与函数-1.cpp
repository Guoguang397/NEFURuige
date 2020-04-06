/*
题目描述：
若有一个存放5名学生2门课成绩的二维数组float score[5][2],编写程序实现将总分最高的同学的2门课成绩及其总分输出。
要求在main函数中完成成绩的输入，编写一个返回指针值的函数来实现对总分最高的同学的查找，最后在main函数中完成调用函数，对结果的输出。
*/
#include <stdio.h>

float* find(int n,float score[][2])
{
	int sum,max;
	float *maxp;
	for(int i=0;i<n;i++)
	{
		sum=score[i][0]+score[i][1];
		if(sum>max)
		{
			max=sum;
			maxp=score[i];
		}
	}
	return maxp;
}

int main()
{
	float score[5][2],*ans;
	for(int i=0;i<5;i++)scanf("%f %f",&score[i][0],&score[i][1]);
	ans=find(5,score);
	printf("%.2f %.2f\nsum=%.2f",*ans,*(ans+1),*ans+*(ans+1));
	return 0;
}
