#include <stdio.h>
#include <string.h>

int main()
{
    int n,k;
    char name[100][21],tmp[21];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)scanf("%s",name[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(name[j],name[j+1])>0)
            {
                strcpy(tmp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],tmp);
            }
        }
    }
    printf("%s",name[k-1]);
    return 0;
}
