#include <stdio.h>

int main()
{
    int m,y;
    scanf("%d %d",&y,&m);
    switch(m)
    {
        case 1:
    	case 3:
    	case 5:
    	case 7:
    	case 8:
    	case 10:
    	case 12:
    		printf("31");
    		break;
    	case 2:
    		if(y%4==0&&y%100!=0||y%400==0)printf("29");
    		else printf("28");
    		break;
    	default:
    		printf("30");
	}
    return 0;
}