#include <stdio.h>

int main()
{
    int n,t,p=-1,ans=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&t);
        if(p<t)
        {
            p=t;
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}
