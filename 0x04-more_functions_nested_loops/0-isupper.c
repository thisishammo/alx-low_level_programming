#include"main.h"
/**
* _isupper - determines whether character is uppercase
* @c: character to be determined
* Return: 1 if uppercase
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
