#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cock,rabbit;
    //start
    int head=98,foot=386;
    foot-=head*2;
    rabbit = foot/2;
    cock = head-rabbit;
    //end
    if(cock<=98)
       printf("cock-%d, rabbit-%d\n",cock, rabbit);
    return 0;
}