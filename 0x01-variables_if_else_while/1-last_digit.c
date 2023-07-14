#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
* main - functions that determines the last digit
* Return: 0 means successful
*/
int main(void)
{
	int n, h;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	h =  n % 10;
	if (h > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, h);
	}
	else if (h == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, h);
	}
	else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, h);
	return (0);
}
