#include <stdio.h>

int main()
{
    int n,num[100],f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&num[i]);
    for(int i=1;i<n-1;i++)
    {
        if(num[i]>num[i-1]&&num[i]>num[i+1])
        {
            if(f)printf(" ");
            f=1;
            printf("%d",num[i]);
        }
    }
    return 0;
}
