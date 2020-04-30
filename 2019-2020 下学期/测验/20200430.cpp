#include <stdio.h>
struct girl
{
	int code;
	char name[30];
	int age;
	float tall;
}g[50];

int main()
{
	int n,cnt;
	float average=0;
	while(~scanf("%d",&n))
	{
		average=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d %s %d %f",&g[i].code,g[i].name,&g[i].age,&g[i].tall);
			average+=g[i].tall;
		}
		average/=n;
		cnt=0;
		for(int i=0;i<n;i++)
		{
			if(g[i].tall>average&&g[i].age>=20&&g[i].age<=25)
			{
				cnt++;
				printf("%d %s\n",g[i].code,g[i].name);
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}

