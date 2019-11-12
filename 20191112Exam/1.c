/*
已知y=2x^3-3x^4-6x^5-4x+5  .从m到n（m,n为整数，m<n），每隔0.2计算出y的值。若前后两个y的积小于零，则输出对应的x和y1，y2 及“此范围中有根”，若没有前后两个y的积小于零的，则输出“此范围内无根”。

输入：输入一个一行两整数m和n(m<n)；

输出：有根时：先一行输出x，再输出前后两个y，中间都空一个空格，最后没有空格。后面另起一行输出“此范围中有根”，后也要换行。若没有满足条件的，只输出一行或“此范围无根”,后也要换行
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x)
{
    return 2*pow(x,3)-3*pow(x,4)-6*pow(x,5)-4*x+5;
}

int main()
{
    double m,n,i;
    scanf("%lf %lf",&m,&n);
    for(i=m+0.2;i<n;i+=0.2)
    {
        if(f(i-0.2)*f(i)<0)
        {
            printf("%.1f %.1f %.1f\n",i-0.2,f(i-0.2),f(i));
            break;
        }
    }
    if(i>=n)printf("此范围无根\n");
    else printf("此范围中有根\n");
    return 0;
}
