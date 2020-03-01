#include <stdlib.h>
#include <stdio.h>
int main()
{
    int computer;
    int me;
    scanf("%d",&me);
    //start
    computer = rand()%3+1;
    if(me==computer+1||me==1&&computer==3)
    {
		printf("You lose.");
	}
	else if(computer==me+1||computer==1&&me==3)
	{
		printf("You win.");
	}
	else
	{
		printf("Draw.");
	}
    //end
    return 0;
}