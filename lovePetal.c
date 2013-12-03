#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	int loop = 2;	

	while(loop > 1)
	{
		printf("\nWelcome to the petal game!\nPress the enter key to peal a petal!\nWe'll start you off with the first one...\n");
		int petalCount = (rand () % 10+5);			
		int counter = 1;
		printf("\nPetals: %d \n", petalCount);
		printf("She loves you");
		petalCount--;

		while(petalCount > 0)
		{
			char c = getchar();
			if(c == '\n')
			{
				printf("\nPetals: %d \n", petalCount);
				if(counter % 2 ==0)
					printf("She loves you");
				else 
					printf("She loves you not");
				petalCount--;
			}
			counter++;
		}
		printf("!!!\n");
	}	
}
