#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,m,a[10];
  //start    //end
  while(scanf("%d",&a[0])!=-1)
   {
    for(i=1;i<10;i++)
       scanf("%d",&a[i]);
    func_xx(a,10);
    for(i=0;i<10;i++)
       printf("%d ",a[i]);
    printf("\n");
 }
return 0;
}
void func_xx(int b[],int n)
{
 //start
    int max,maxp,min,minp;
     min=max=b[0];
    minp=maxp=0;
    for(int i=1;i<10;i++)
    {
    	if(b[i]>max)
		{
			max=b[i];
			maxp=i;
    	}
    	if(b[i]<min)
		{
			min=b[i];
			minp=i;
    	}
	}
	b[maxp]+=b[minp];
	b[minp]=b[maxp]-b[minp];
	b[maxp]-=b[minp];
 //end
}