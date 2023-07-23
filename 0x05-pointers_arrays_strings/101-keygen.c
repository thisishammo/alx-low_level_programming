#include<time.h>
#include<stdio.h>
#include<stdlib.h>
/**
* main - executes code
* Return: 0 always
*/
int main(void)
{
	long int random;

	srand(time(NULL));
	random = rand();

	printf("%ld", random);
	return (0);
}
