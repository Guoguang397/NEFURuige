#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num, digit1, digit2, digit3, digit4, digit5;
   digit1 = digit2 = digit3 = digit4 = digit5 = 0;
   printf("Enter a number between 0 and 32767: ");
   scanf("%d",&num);
   //start
   digit5 = num%8;num/=8;
   digit4 = num%8;num/=8;
   digit3 = num%8;num/=8;
   digit2 = num%8;num/=8;
   digit1 = num%8;num/=8;
   //end
   printf("In octal, your number is: %d%d%d%d%d\n",digit1,digit2,digit3,digit4,digit5);
   return 0;
}