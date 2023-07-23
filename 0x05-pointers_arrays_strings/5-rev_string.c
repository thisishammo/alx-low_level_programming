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
	int h, p;
	char string[100];
	int k = 0;

	for (h = 0; h < 1000000; h++)
	{
		if ((*(s + h)) == '\0')
		{
			break;
		}
	}
	for (h = h - 1; h > -1; h--)
	{
		string[k] = *(s + h);
		k++;
	}
	for (p = 0; p < k; p++)
	{
		if (string[p] != '\0')
		{
			*(s + p) = string[p];
		}
	}
}
