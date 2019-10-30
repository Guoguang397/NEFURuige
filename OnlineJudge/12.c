#include <stdio.h>

int main()
{
    long long n,m,a[30][30];
    scanf("%d",&n);
    while(n!=0)
    {
        for(int i=0;i<n;i++)
        {
            a[i][0]=1;
            a[i][i]=1;
            for(int j=0;j<=i;j++)
            {
                if(j!=0&&j!=i)
                {
                    a[i][j]=a[i-1][j]+a[i-1][j-1];
                }
                //printf("%d-%d-%d ",i,j,a[i][j]);
            }
            for(int j=0;j<i;j++)
            {
            	printf("%lld ",a[i][j]);
			}
            printf("1\n");
        }
        printf("\n");
        scanf("%d",&n);
    }
    return 0;
}