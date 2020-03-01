#include <stdlib.h>
#include <stdio.h>
int main()
{
   int max_save[10][7]={{1,1,1,1,1,1,0},
                        {0,1,1,0,0,0,0},
                        {1,1,0,1,1,0,1},
                        {1,1,1,1,0,0,1},
                        {0,1,1,0,0,1,1},
                        {1,0,1,1,0,1,1},
                        {1,0,1,1,1,1,1},
                        {1,1,1,0,0,0,0},
                        {1,1,1,1,1,1,1},
                        {1,1,1,1,0,1,1}};
   int num,col;
   scanf("%d",&num);
   /*模拟七段数码显示管分5行输出，
    *奇数行只输出空格或者-,
    *偶数行只输出空格或者|。*/
   //start
   if(max_save[num][0])printf(" - \n");
   else printf("   \n");
   if(max_save[num][5])printf("| ");
   else printf("  ");
   if(max_save[num][1])printf("|\n");
   else printf(" \n");
   if(max_save[num][6])printf(" - \n");
   else printf("   \n");
   if(max_save[num][4])printf("| ");
   else printf("  ");
   if(max_save[num][2])printf("|\n");
   else printf(" \n");
   if(max_save[num][3])printf(" - \n");
   else printf("   \n");
   //end
   return 0;
}
