#include<time.h>
#include<stdio.h>
#include<stdlib.h>
/**
* main - executes code
* Return: 0 always
*/
int main(void)
{
	srand(time(NULL));
	long random = rand();

	printf("%ld", random);
	return (0);
}
