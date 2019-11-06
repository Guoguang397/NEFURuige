#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[100],del;
    int i;
    scanf("%s %c",&ch,&del);
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]!=del)printf("%c",ch[i]);
    }
    return 0;
}
