/*
��Ŀ������
������ʵĽṹ��������������ʾƽ���ϵĵ㣬�����Լ��Ķ�����ƽ���������벢�����
*/

#include <stdio.h>
#include <math.h>

struct point
{
	double x,y;
}p1,p2;

int main()
{
	while(~scanf("%lf %lf",&p1.x,&p1.y))
	{
		scanf("%lf %lf",&p2.x,&p2.y);
		printf("Distance:%f\n",sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)));
	}
	return 0;
}
