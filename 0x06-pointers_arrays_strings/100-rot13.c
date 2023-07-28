#include"main.h"
/**
* rot13 - converts symbols to ROT13
* @c: string to be converted
* Return: Pointer c
*/
char *rot13(char *c)
{
	int i, h;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklmn";

	for (h = 0; c[h] != '\0'; h++)
	{
		for (i = 0; i < 52; i++)
		if (*(c + h) == s[i])
		{
			*(c + h) = s1[i];
		}
	}
	return (c);
}
