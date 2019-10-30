#include <stdio.h>

int main()
{
    int n,m,a[16],p,res;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        p=0;res=0;
        while(1)
        {
            scanf("%d",&a[p]);
            if(a[p]==0)
            {
                break;
            }
            p++;
        }
        for(int j=0;j<p;j++)
        {
            for(int k=0;k<p;k++)
            {
                if(a[k]==2*a[j])res++;
            }
        }
        printf("%d\n",res);
    }
    return 0;
}