#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    c=getchar();
    printf("ordch=%d,prech=%c,succch=%c",c,c-1,c+1);
    return 0;
}
