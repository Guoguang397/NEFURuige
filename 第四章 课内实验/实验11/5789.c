#include <stdio.h>
#include <stdlib.h>
void func_xx(int b[],int n)
{
//start
    int ex,tmp;
	for(int i=0;i<5-n;i++)
	{
		tmp=b[4];
		for(int j=4;j>=1;j--)
		{
			b[j]=b[j-1];
		}
		b[0]=tmp;
	}
//end
}
int main()
{
  int i,m,a[5];
  while(scanf("%d",&m)!=-1)
  {
      for(i=0;i<5;i++)
       scanf("%d",&a[i]);
      func_xx(a,m);
      for(i=0;i<5;i++)
       printf("%d ",a[i]);
      printf("\n");
  }
return 0;
}