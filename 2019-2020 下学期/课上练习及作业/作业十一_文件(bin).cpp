#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *fp;
void createPrimeFile()
{
	printf("Creating Prime List...\n");
	fp=fopen("prime.dat","wb");
	int isprime;
	for(int i=2;i<1000;i++)
	{
		isprime=1;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime)
		{
			printf("%d ",i);
			fwrite(&i,sizeof(int),1,fp);
		}
	}
	printf("\nDone!\nPlease restart the program to read from file.\n");
}

void printFromFile()
{
	printf("Reading from Prime List...\n");
	int num,cnt=0;
	do
	{
		if(cnt&&cnt%2==0)
		{
			printf("%d ",num);
		}
		fread(&num,sizeof(int),1,fp);
		cnt++;
	}while(!feof(fp));
}

int main()
{
	fp=fopen("prime.dat","rb");
	if(fp==NULL)createPrimeFile();
	else printFromFile();
	fclose(fp);
}
