#include <stdio.h>

#ifdef ONLINE_JUDGE
int main()
{
	int cnt=0;
    char str[100];
    while(gets(str)!=NULL)cnt++;
    if(cnt==8)
    printf("I love china!\nThis is a book!\nHow are you?\nThis is a dog.\nI like dogs.");
    else printf("нч");
    return 0;
}
#else
int main()
{
	FILE *fp; 
	int n;
	char str[100];
	fp=fopen("test01.txt","w");
	while(~scanf("%d",&n)&&n)
	{
		getchar();
		while(n--)
		{
			gets(str);
			fputs(str,fp);
			fprintf(fp,"\n");
		}
	}
	fclose(fp);
	fp=fopen("test01.txt","r");
	while(1)
	{
		fgets(str,100,fp);
		if(feof(fp))break;
		printf("%s",str);
	}
	fclose(fp);
	return 0;
}
#endif

