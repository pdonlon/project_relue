#include <stdio.h>

int main()
{
	int list [10] = {1,5,9,12,40,60,300,555,699,999};
	int sizeOfList = 10;
	int target = 699;

	int maxSize = sizeOfList - 1;
	int minSize = 0;
	int middle = 0;

	while(list[middle] != target)
	{
		middle = (maxSize + minSize)/2;

		printf("middle: %d \n", list[middle]);	

		if(list[middle] == target )
			break;
		else if(list[middle] < target)
			minSize = (maxSize + minSize)/2;
		else
			maxSize = (maxSize + minSize)/2;
	}

	printf("You found the target: %d" ,list[middle]);
}

