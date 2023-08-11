#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int convert, i;
	long long unsigned int product = 1;
	char *temp;

	if (argc >= 3)
	{
		for (i = 1; i <	argc; i++)
		{
			convert = atoi(argv[i]);
			product *= convert;
		}
		printf("%llu\n", product);
		return (0);
	}
	else
		printf("Error\n");
		return (98);

}
