
#include<stdio.h>

int main()
{
	for(int x=1; x<1000001; x++){

		if(x % (5*3) == 0)
			printf("fizzbuzz %d\n",x);
		
		else if(x % 3 == 0)
			printf("fizz %d\n",x);
		
		else if(x % 5 == 0)
			printf("buzz %d\n",x);
			
	}
	//printf("hello \"hi\"\n");
}

