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
	fin=fopen("in1.txt","r");
	fout=fopen("out.txt","w");
	while(~fscanf(fin,"%c",&tmp))fprintf(fout,"%c",tmp);
	fclose(fin);
	fprintf(fout,"\n");
	fin=fopen("in2.txt","r");
	while(~fscanf(fin,"%c",&tmp))fprintf(fout,"%c",tmp);
	fclose(fin);
	fclose(fout);
	fin=fopen("out.txt","r");
	while(~fscanf(fin,"%c",&tmp))printf("%c",tmp);
	fclose(fin);
	return 0;
}
#endif

