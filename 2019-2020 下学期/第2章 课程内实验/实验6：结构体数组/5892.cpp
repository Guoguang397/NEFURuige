#include <stdio.h>
#include <string.h>

struct stu
{
	char name[20];
	int qm,bj,lw;
	char gb,xb;
	int jxj;
}s[100];

int main()
{
	int n,maxjxj,sum;
	char maxname[20];
	while(~scanf("%d",&n))
	{
		maxjxj=-1;
		sum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%s %d %d %c %c %d",s[i].name,&s[i].qm,&s[i].bj,&s[i].gb,&s[i].xb,&s[i].lw);
			s[i].jxj=0;
			if(s[i].qm>80&&s[i].lw>=1)s[i].jxj+=8000;
			if(s[i].qm>85&&s[i].bj>80)s[i].jxj+=4000;
			if(s[i].qm>90)s[i].jxj+=2000;
			if(s[i].qm>85&&s[i].xb=='Y')s[i].jxj+=1000;
			if(s[i].bj>80&&s[i].gb=='Y')s[i].jxj+=850;
			sum+=s[i].jxj;
			if(s[i].jxj>maxjxj)
			{
				maxjxj=s[i].jxj;
				strcpy(maxname,s[i].name);
			}
		}
		printf("%s\n%d\n%d\n",maxname,maxjxj,sum);
	}
	return 0;
}
