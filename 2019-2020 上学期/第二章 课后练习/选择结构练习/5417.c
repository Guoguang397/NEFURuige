#include <stdio.h>

int gdom(int y,int m)
{
    switch(m)
    {
        case 1:
        case 3:
    	case 5:
    	case 7:
    	case 8:
    	case 10:
    	case 12:
    		return 31;
    		break;
    	case 2:
    		if(y%4==0&&y%100!=0||y%400==0)return 29;
    		else return 28;
    		break;
    	default:
    		return 30;
	}
}

int main()
{
    int a,b,c,d=0;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=1;i<b;i++)
    {
    	d+=gdom(a,i);
	}
	d+=c;
	printf("%d",d);
    return 0;
}

