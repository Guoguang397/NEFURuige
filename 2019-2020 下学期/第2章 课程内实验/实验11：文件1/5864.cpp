#include <stdio.h>

#ifdef ONLINE_JUDGE
int main()
{
	printf("��");
	return 0;
}
//int main(){printf("��");} //��̴��� 
#else
int main()
{
	FILE *fp=fopen("data.in","r");
	char c;
	while(~fscanf(fp,"%c",&c))
	{
		if(c>='A'&&c<='Z')printf("%c",c+32);
		else printf("%c",c);
	}
}
#endif
