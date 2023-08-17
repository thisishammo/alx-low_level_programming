#include<stdarg.h>
#include<stdio.h>
/**
 * print_strings - prints strings
 * @separator: delimiter
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			char *s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s\n", s);
			}
		}
		else
		{
			char *s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s%s", s, separator);
			}
		}
	}
	va_end(args);
}
