#include"main.h"
/**
* _strcmp - compares which string is big
* @s1: one of the strings
* @s2: one of the strings
* Return: -15 is s1 is smaller 15 if vice versa and 0 if equal
*/
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, h, k;

	for (h = 0; *(s1 + h) != '\0'; h++)
	{
		a = a + ((int)*(s1 + h));
	}
	for (k = 0; *(s2 + k) != '\0'; k++)
	{
		b = b + ((int)*(s2 + k));
	}
	return ((a == b) ? 0 : (a > b) ? 15 : -15);
}
