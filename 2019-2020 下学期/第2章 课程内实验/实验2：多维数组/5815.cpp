#include <stdio.h>
#include <stdlib.h>
#define R 3
#define C 5
#define N (R>C?R:C)
int main(void)
{
   void transfor(int a[][N]);
   int array[N][N],i,j;
   for(i=0;i<R;i++)
      for(j=0;j<C;j++)
         scanf("%d",&array[i][j]);
   transfor(array);
   for(i=0;i<C;i++)
      for(j=0;j<R;j++)
         j!=R-1?printf("%d ",array[i][j]):printf("%d\n",array[i][j]);
    return 0;
}
void transfor(int a[][N])
{
//start
	int tmp;
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			tmp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=tmp;
		}
	}
//end
}
