#include"main.h"
/**
* _isdigit - determines whether a char
* is a digit.
* @c: character to be determined
* Return: 1 if it is a digit 0 if otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
