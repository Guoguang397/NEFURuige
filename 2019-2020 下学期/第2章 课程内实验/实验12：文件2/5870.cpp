#include <stdio.h>
#include <stdlib.h>

#ifdef ONLINE_JUDGE
int main()
{
	printf("нч");
	return 0;
}
#else
int main()
{
	FILE *fin,*fout;
	char tmp;
	fin=fopen("in.txt","r");
	fout=fopen("out.txt","w");
	while(~fscanf(fin,"%c",&tmp))
	{
		fprintf(fout,"%c",tmp+3);
	}
	fclose(fin);
	fclose(fout);
	return 0;
}
#endif

