#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, denom1, num2, denom2, result_num, result_denom;
   printf("Enter first fraction: ");
   scanf("%d/%d", &num1, &denom1);
   printf("Enter second fraction: ");
   scanf("%d/%d", &num2, &denom2);
   //start
   result_denom = denom1*denom2;
   result_num = num1*(result_denom/denom1)+num2*(result_denom/denom2);
   //end
   printf("The sum is: %d/%d\n", result_num, result_denom);
   return 0;
}