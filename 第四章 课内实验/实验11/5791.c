#include <stdio.h>
#include <stdlib.h>
int main()
{
 double data[10];
 int tmp,i,j,k;
 //start 
 //end
 while(scanf("%lf",&data[0])!=-1)
 {
     for(i=1;i<10;i++)
        scanf("%lf",&data[i]);
     func_sort(data,10);
     for(i=0;i<9;i++)
         printf("%.1lf ",data[i]);
     printf("%.1lf\n ",data[i]);
 }
    return 0;
}
void func_sort(double a[],int n)
{
    //start
    int ok=0;
    while(!ok)
	{
		ok=1;
		for(int i=0;i<n;i++)
		{
			if(a[i]<a[i+1])
			{
				a[i]+=a[i+1];
				a[i+1]=a[i]-a[i+1];
				a[i]-=a[i+1];
				ok = 0;
			}
		}
	}
    //end
}