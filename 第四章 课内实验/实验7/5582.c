#include <stdio.h>
#include <string.h>
//常规方法
int main()
{
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
        while(a>0)
        {
            b=a%10;
            printf("%d",b);
            a/=10;
        }
        printf("\n");
	}
    return 0;
}


/* 数组
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    while(scanf("%s",&s)!=EOF)
    {
        for(int i=strlen(s)-1;i>=0;i--)printf("%c",s[i]);
	}
    return 0;
}
*/