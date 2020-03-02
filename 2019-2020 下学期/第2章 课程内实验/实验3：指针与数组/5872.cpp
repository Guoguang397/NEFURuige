#include <stdio.h>

int a,b,c;
int *max,*mid,*min;

void sort()
{
	max=mid=min=&a;
	if(b>*max)max=&b;
	if(c>*max)max=&c;
	if(b<*min)min=&b;
	if(c<*min)min=&c;
	if(max!=&b&&min!=&b)mid=&b;
	if(max!=&c&&min!=&c)mid=&c;
}

int main()
{
    while(~scanf("%d %d %d",&a,&b,&c))
    {
    	sort();
    	printf("%d %d %d\n",*min,*mid,*max);
	}
    return 0;
}

