#include <stdio.h>
#include <stdlib.h>
#define LEN 100
int main(void)
{
	char one[LEN],the_other[LEN];  //one���ڴ洢ԭ����the_other���ڴ洢ƥ�䴮
	int i,j;
	gets(one);
	i=0, j=0;
	while(one[i]!='\0')
	{
		//start
		if(one[i]=='A')the_other[i]='T';
		if(one[i]=='C')the_other[i]='G';
		if(one[i]=='G')the_other[i]='C';
		if(one[i]=='T')the_other[i]='A';
		i++;
		j++;
		//end
	}
	the_other[j] = '\0';
	puts(the_other);
	return 0;
}
