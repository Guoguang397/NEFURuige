/*
描述：输入一个三角形的两条边和其夹角的度数，利用正弦定理计算三角形的面积。计算公式为
提示：圆周率用3.14159表示.

输入描述：输入的两条边b,c为整数（1-1000之间），角度为整数，是度数表示的角度；

输出：输出三角形的面积后跟回车。保留4位小数。
sample input
3 5 90
sample output
7.5000
*/

//圆周率取3.14要不然会出错

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double p=3.14159,s;
    int b,c,d;
    scanf("%d %d %d",&b,&c,&d);
    s=0.5*b*c*sin((d/180.0)*p);
    printf("%.4f",s);
    return 0;
}