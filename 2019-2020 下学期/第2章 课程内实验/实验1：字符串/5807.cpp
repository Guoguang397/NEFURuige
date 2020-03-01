#include <stdio.h>
#include <stdlib.h>
#define LEN 10
int main()
{
   char array[LEN];
   int i;
   gets(array);
   i=0;
   while(array[i]!='\0')
   {
      //start
      if(array[i]>='A'&&array[i]<='Z')
	  {
	  	array[i]+=32;
	  }
	  i++;
      //end
   }
   printf("%s",array);
   return 0;
}
