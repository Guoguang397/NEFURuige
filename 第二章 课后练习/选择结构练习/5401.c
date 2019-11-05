#include <stdio.h>

int main()
{
    char c;
    int d=0,x=0,s=0,q=0;
    for(int i=0;i<4;i++)
    {
        scanf("%c",&c);
        if(c>='a'&&c<='z')x++;
        else if(c>='A'&&c<='Z')d++;
    	else if(c>='0'&&c<='9')s++;
    	else q++;
	}
    printf("%d %d %d %d",x,d,s,q);
    return 0;
}
