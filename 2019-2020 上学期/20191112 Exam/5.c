/*
从键盘输入一串字符以小数点“.”作为结束，分别将其中的连续的数字转换为相应的整数，并统计整数个数，依次输出整数乘以2后的积（范围在int范围内）和整数个数。每个整数2倍输出时用两个空格分隔；整数个数在最后输出，输出后回车，与前数也是两个空格分隔。如字符串中没有数字，则输出0.

例如：输入：cisk98 9iei087kkd*1kdi.
输出：196  18  174  2  4
输入：eikkfiekkkgiek 33d,ie.
输出：0

输入数据只有一组，每组最后用小数点结束；
输出一组数据最后回车结束
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n=1,num=0;
    char c;
    c=getchar();
    while(c!='.')
    {
        if(c>='0'&&c<='9')
        {
            if(n)
            {
                n=0;
                a=c-'0';
            }
            else
            {
                a=a*10+c-'0';
            }
            scanf("%c",&c);
            continue;
        }
        if(n==0)
        {
            printf("%d  ",a*2);
            num++;
            n=1;
        }
        c=getchar();
    }
    if(n==0)
    {
        printf("%d  ",a*2);
        num++;
        n=1;
    }
    printf("%d",num);
    return 0;
}
