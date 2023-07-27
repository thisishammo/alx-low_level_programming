#include"main.h"
/**
* string_toupper - changes lowercase to uppercase
* @c: string to be examined
* Return: pointer
*/
char *string_toupper(char *c)
{
	int h;

	for (h = 0; *(c + h) != '\0'; h++)
	{
		if ((int)*(c + h) >= 97 && (int)*(c + h) <= 122)
		{
			*(c + h) = (char)((int)*(c + h) - 32);
		}
	}
	return (c);
}
