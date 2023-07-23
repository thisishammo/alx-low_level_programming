#include"main.h"
#include<stdio.h>
/**
* rev_string - prints strings in reverse
* @s: string to be reversed
*
* Return: nothing
*/
void rev_string(char *s)
{
	int h, k;
	char string[1000];

	for (h = 0; h < 1000000; h++)
	{
		if ((*(s + h)) == '\0')
		{
			break;
		}
	}
	for (h = h; h > -1; h--)
	{
		for (k = 0; k <= h; k++)
		{
			string[k] = *(s + h);
		}
	}
	for (h = k ; h > -1 ; h--)
	{
		for (
		*(s + h) = string[h];
	}
}
