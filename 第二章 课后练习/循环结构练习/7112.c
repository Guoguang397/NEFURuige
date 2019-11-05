#include <stdio.h>
#include <string.h>

int main()
{
    int a;
	scanf("%d",&a);
	printf("tomorrow is ");
	switch(a)
	{
		case 0:
			printf("mon");
			break;
		case 1:
			printf("tue");
			break;
		case 2:
			printf("wed");
			break;
		case 3:
			printf("thu");
			break;
		case 4:
			printf("fri");
			break;
		case 5:
			printf("sat");
			break;
		case 6:
			printf("sun");
			break;
	}
    return 0;
}
