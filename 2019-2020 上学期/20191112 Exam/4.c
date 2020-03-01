/*
双十一某宝搞活动，多买多折。若某商品原价为p，购买数量为t，请按照下面折扣计算花费的总价。
<Image>

输入描述：输入商品单价（实数）和数量（整数）

输出：折扣后总价。保留2为小数。

sample input
19 4
sample output
60.80
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    double s,p;
    scanf("%lf %d",&p,&t);
    if(t>=1&&t<3)s=p*t*0.9;
    else if(t>=3&&t<6)s=p*t*0.8;
    else s=p*t*0.7;
    printf("%.2f",s);
    return 0;
}
