#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: what separates the numbers
 * @n: number of numbers to be printed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
	{
	}
	else
	{
		va_list args;
		unsigned int i;

		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			int num = va_arg(args, int);

			if (i == (n - 1))
			{
				printf("%d\n", num);
			}
			else
			{
				printf("%d, ", num);
			}
		}
		va_end(args);
	}
}
