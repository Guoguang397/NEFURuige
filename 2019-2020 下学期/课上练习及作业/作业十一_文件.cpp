/*
��Ŀ������ 
��д����2-1000֮�������������һ�����ŷָ����浽һ�������ļ��к󣬽����еĵ�2��4��6��......ż���������
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *fp;
void createPrimeFile()
{
	printf("Creating Prime List...\n");
	fp=fopen("prime.txt","w");
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
			if(i!=2)
			{
				printf(",");
				fprintf(fp,",");
			}
			printf("%d",i);
			fprintf(fp,"%d",i);
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
			if(cnt!=2)printf(",");
			printf("%d",num);
		}
		fscanf(fp,"%d",&num);
		fgetc(fp);
		cnt++;
	}while(!feof(fp));
}

int main()
{
	fp=fopen("prime.txt","r");
	if(fp==NULL)createPrimeFile();
	else printFromFile();
	fclose(fp);
}
