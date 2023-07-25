#include"main.h"
#include<stdlib.h>
#include<ctype.h>
/**
* _atoi - converts string to interger
* @s: string to be converted
* Return: integer or zero if there is no integer
*/
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int found = 0;

	while (isspace(*s))
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else
	if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		found = 1;
		result = result * 10 + (*s - '0');
		s++;
	}
	return (found ? result * sign : 0);
}
