#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,f,score;
    a=b=c=d=f=0;
    scanf("%d",&score);
    //start
    while(score!=-1)
    {
        switch(score/10)
    	{
    		case 10:
    		case 9:
	    		a++;
	    		break;
	    	case 8:
	    		b++;
	    		break;
	    	case 7:
	    		c++;
	    		break;
	    	case 6:
	    		d++;
	    		break;
	    	default:
	    		f++;
		}
    	scanf("%d",&score);
	}
    //end
    printf("A: %d\nB: %d\nC: %d\nD: %d\nF: %d\n",a,b,c,d,f);
    return 0;
}