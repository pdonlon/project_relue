#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	printf("enter the lower bound of random numbers \n");
	int lBound;
	scanf("%d", &lBound);

	printf("enter the upper bound of random numbers \n");
	int uBound;
	scanf("%d", &uBound);

	while(uBound <= lBound)
	{
		printf("the upper bound must be greater than %d \n", lBound);
		scanf("%d", &uBound);	
	}	

	int guess = lBound - 1 ;
	int secretNum = rand() % (uBound+1 - lBound ) + lBound;	

	printf("Enter a guess! \n");

	while(guess != secretNum)
	{
		scanf("%d", &guess);

		if(guess < secretNum)
			printf("too small \n");
		else if(guess > secretNum)
			printf("too big \n");
		else
			break;
	}

	printf("you win! \n");

}


