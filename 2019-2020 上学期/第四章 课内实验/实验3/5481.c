#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[5];
   scanf("%s",&a);
   for(int i=0;i<5;i++)
   {
       if(a[i]>='a'&&a[i]<='z')a[i]+=3;
       printf("%c",a[i]);
   }
   return 0;
}