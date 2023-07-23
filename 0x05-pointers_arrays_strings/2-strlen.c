#include"main.h"
/**
* _strlen - returns the length of a string
* @s: string to be counted
* Return: length of string
*/
int _strlen(char *s)
{
	int c = 0;

	for (c = 0; c < 10000000; c++)
	{
		if (*(s + c) == '\0')
		{
			break;
		}
	}
	return (c);
}
