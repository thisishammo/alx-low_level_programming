#include"main.h"
/**
* leet - converts symbols to 1337
* @c: string to be converted
* Return: Pointer c
*/
char *leet(char *c)
{
	int i, h;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (h = 0; c[h] != '\0'; h++)
	{
		for (i = 0; i < 10; i++)
		if (*(c + h) == s[i])
		{
			*(c + h) = s1[i];
		}
	}
	return (c);
}
