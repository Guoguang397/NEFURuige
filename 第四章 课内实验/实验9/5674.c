#include<stdio.h>

int main()
{
    int a,b,p,n[20],ok=0;
    while(scanf("%d",&a)!=EOF)
    {
        for(int k=0;k<a;k++)
        {
        p=0;
        ok=0;
        scanf("%d",&b);
        for(int i=0;i<b;i++)
        {
            scanf("%d",&n[p++]);
        }
        while(!ok)
        {
            ok=1;
            for(int j=0;j<p-1;j++)
            {
                if(n[j]<n[j+1])
                {
                    n[j]+=n[j+1];
                    n[j+1]=n[j]-n[j+1];
                    n[j]-=n[j+1];
                    ok=0;
                }
            }
        }
        for(int i=p-1;i>0;i--)
        {
            printf("%d ",n[i]);
        }
        printf("%d\n",n[0]);
        }
        
    }
    return 0;
}
