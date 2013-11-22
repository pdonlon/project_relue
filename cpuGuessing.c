#include <stdio.h>

int main()
{

	int loop = 1;
	int user;

	while(loop > 0){
		int maxRange = 100;
		int minRange = 0;
		int cpuGuess = (maxRange + minRange)/2;
		printf("Think of a number in your head from 1 - %d for the computer to guess \nif the number is too big type 2, if too small, type 1, if it's correct, type 0\nIs %d your number?\n", maxRange, cpuGuess);

		scanf("%d", &user);
		while(user!=0)
		{
			if(user == 2)
				maxRange = (maxRange + minRange) / 2;
			else if (user == 1)
				minRange = (maxRange + minRange) / 2;
			
			cpuGuess = (maxRange + minRange) /2;
			printf("is %d your number?", cpuGuess);
			scanf("%d", &user);
		}
	}
}
