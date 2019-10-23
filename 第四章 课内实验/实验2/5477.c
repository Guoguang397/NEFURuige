#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    printf("%c %c",a-'a'+'A',b-'a'+'A');
    return 0;
}