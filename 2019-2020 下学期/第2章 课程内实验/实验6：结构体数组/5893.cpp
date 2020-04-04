#include <stdio.h>

struct student
{
    char name[21];
	char xh[11];
	double g;
}s[10];

int main()
{
	int n,k;
	while(~scanf("%d",&n))
	{
		k=0;
		for(int i=0;i<n;i++)
		{
			getchar();
            getchar();
			gets(s[i].name);
			scanf("%s %lf",s[i].xh,&s[i].g);
			if(s[i].g<60)k++;
		}
		if(k)
		{
			printf("%d\n",k);
			for(int i=0;i<n;i++)
			{
				if(s[i].g<60)
				{
					printf("%s\n",s[i].name);
				}
			}
			for(int i=0;i<n;i++)
			{
				if(s[i].g<60)
				{
					printf("%s\n",s[i].xh);
				}
			}
			for(int i=0;i<n;i++)
			{
				if(s[i].g<60)
				{
					printf("%.2f\n",s[i].g);
				}
			}
		}
		else
		{
			printf("They are Great!!\n");
		}
	}
	return 0;
}
