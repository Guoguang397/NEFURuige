#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tax=0;
	int a,b;
	scanf("%d %d",&a,&b);
	a-=b;
	a-=3500;
	if(a>80000)tax+=(a-80000)*0.45;
	if(a>55000)tax+=((a>800000?800000:a)-55000)*0.35;
	if(a>35000)tax+=((a>55000?55000:a)-35000)*0.30;
	if(a>9000)tax+=((a>35000?35000:a)-9000)*0.25;
	if(a>4500)tax+=((a>9000?9000:a)-4500)*0.20;
	if(a>1500)tax+=((a>4500?4500:a)-1500)*0.10;
	if(a>0)tax+=((a>1500?1500:a))*0.03;
	printf("%.2f",tax);
}