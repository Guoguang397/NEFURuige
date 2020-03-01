#include <stdio.h>
#include <stdlib.h>
#define LEN 100
int main()
{
	int compress(char array[], int count[]);
	char array[LEN];
	int count[LEN];
	int i;
	int tail; //count数组的有效最末下标
	while(scanf("%s",array)!=-1)
	{
		tail = compress(array, count);
		for(i=0; i<tail; i++)
			i<tail-1 ? printf("%d ",count[i]) : printf("%d\n",count[i]);
	}
	return 0;
}
int compress(char array[], int count[])
{
//start
	int cnt=1,num=0;
	for(int i=1;array[i]!='\0';i++)
	{
		if(array[i]==array[i-1])cnt++;
		else
		{
			count[num++]=cnt;
			cnt=1;
		}
	}
	count[num++]=cnt;
	return num;
//end
}
