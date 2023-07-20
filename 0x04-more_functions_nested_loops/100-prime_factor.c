#include<stdio.h>
#include<stdlib.h>
#include<inttypes.h>
/**
* main - executes code
* Return: 0 always
*/
int main(void)
{
	int64_t i;
	int64_t n = 612852475143;
	int64_t large = 0;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	large = i - 1;
	printf("%"PRId64"\n", large);
	return (0);
}
