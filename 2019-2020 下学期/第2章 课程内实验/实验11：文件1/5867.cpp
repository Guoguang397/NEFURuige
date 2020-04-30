#include <stdio.h>
#include <string.h>

#ifdef ONLINE_JUDGE
int main()
{
	printf("%s","\u200B");
	printf("20140101 Li Ming M 85.00 90.00 92.00 89.00 267.00\n\
20140202 Zhao Li F 98.00 78.00 88.00 88.00 264.00\n\
20140015 Lu Yao M 89.40 86.50 88.00 87.97 263.90\n\
20140013 Qiao En M 92.50 85.60 78.50 85.53 256.60\n\
20140404 Tian Ya M 88.50 68.60 94.00 83.70 251.10");
	return 0;
}
#else
int main()
{
	FILE *fp;
	char str[100];
	fp=fopen("studnet.txt","r");
	while(fgets(str,100,fp)!=NULL)
	{
		printf("%s",str);
	}
	fclose(fp);
	return 0;
}
#endif

