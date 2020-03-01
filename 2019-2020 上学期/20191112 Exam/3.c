/*
输入一串大写字母，以“.”作为结束。输出字母表中其前面字母和后面字母。输入若为A则输出“A无前面字母”及对应后面字母；输入若为Z则输出前面字母及“Z无后面字母”。

输入描述：输入一串大写字母，以"."作为结束；

输出描述：按照要求输出相应的结果。

sample input
TEACHER
sample output
SUDFA无前面字母BBDGIDFQS
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    while(ch!='.')
    {
        switch(ch)
        {
            case 'A':
                printf("A无前面字母B");
                break;
            case 'Z':
                printf("YZ无后面字母");
                break;
            default:
                printf("%c%c",ch-1,ch+1);
        }
        scanf("%c",&ch);
    }
    return 0;
}
