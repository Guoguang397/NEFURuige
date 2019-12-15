#include <stdio.h>
#include <stdlib.h>
//start 
void sort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}

//end
int main()
{
    int n,a[100],i;
    while(scanf("%d",&n)!=-1)
     {
        for(i=0;i<n;i++)
          scanf("%d",&a[i]);
        sort(a,n);
        for(i=0;i<n-1;i++)
         printf("%d ",a[i]);
        printf("%d\n",a[n-1]);
     }
    return 0;
}
