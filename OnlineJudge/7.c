#include <stdio.h>

int main()
{
    int n,m,a[100],n1,n5,n10,tmp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        n1=0;n5=0;n10=0;
        scanf("%d",&m);
        for(int j=0;j<m;j++)
        {
            scanf("%d",&tmp);
            if(tmp==1)n1++;
            else if(tmp==5)n5++;
            else if(tmp==10)n10++;
        }
        printf("%d %d %d\n",n1,n5,n10);
    }
    return 0;
}