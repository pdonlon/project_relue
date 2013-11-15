#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

	int shoot = 2;

	while(shoot<3)
	{
		printf("enter a choice 0 = rock, 1 = scissors, 2 = paper");
		scanf("%d",&shoot);
		if(shoot!=0 && shoot!=1 && shoot!=2)
			break;
		srand(time(NULL));	
		int cpuShoot = rand()%3;
		if((shoot+1)%3 == cpuShoot)
			printf("You win ");
		else if(shoot == cpuShoot)
			printf("Draw \n");
		else
			printf("You lose \n");
	}
}
