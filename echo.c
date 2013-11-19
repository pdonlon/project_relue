#include <stdio.h>

int main()
{

	int echoLoop = 2;
	char echo[50];

	while(echoLoop > 1){
		printf("type something you want to be echoed \n");
		scanf("%49[^\n]%*c",echo);
		printf("%s \n", echo);
	}
}
