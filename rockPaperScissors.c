#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
const char *objNames[3];
objNames[0] = "rock";
objNames[1] = "scissors";
objNames[2] = "paper";

const char *attacks[3];
attacks[0] = "smashes";
attacks[1] = "cuts";
attacks[2] = "covers";

	int shoot = 2;

	while(shoot<3)
	{
	printf("enter a choice 0 = rock, 1 = scissors, 2 = paper \n");
		scanf("%d",&shoot);
		if(shoot!=0 && shoot!=1 && shoot!=2)
			break;
		srand(time(NULL));	
		int cpuShoot = rand()%3;
		if((shoot+1)%3 == cpuShoot){
			printf("You win, ");

printf("%s %s %s \n", objNames[shoot], attacks[shoot], objNames[cpuShoot]);
}
else if(shoot == cpuShoot)
			printf("Draw \n");
		else{
			printf("You lose, ");
printf("%s %s %s \n", objNames[cpuShoot], attacks[cpuShoot], objNames[shoot]);	
}
}
}
