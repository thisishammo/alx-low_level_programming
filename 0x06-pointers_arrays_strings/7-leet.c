#include"main.h"
/**
* leet - converts symbols to 1337
* @c: string to be converted
* Return: Pointer c
*/
char *leet(char *c)
{
	int i;

	for (i = 0; *(c + i) != '\0'; i++)
	{
		if (*(c + i) == 'a' || *(c + i) == 'A')
		{
			if (*(c + i) == 'A')
			{
				*(c + i) = (char)((int)(*(c + i)) - 13);
			}
			else
			 *(c + i) = (char)(((int)(*(c + i))) - 45);
		}
		else
		if (*(c + i) == 'e' || *(c + i) == 'E')
		{
			if (*(c + i) == 'E')
			{
				*(c + i) = (char)((int)(*(c + i)) - 18);
			}
			else
			 *(c + i) = (char)(((int)(*(c + i))) - 50);
		}
		else
		if (*(c + i) == 'o' || *(c + i) == 'O')
		{
			if (*(c + i) == 'O')
			{
				*(c + i) =  (char)((int)(*(c + i)) - 26);
			}
			else
			 *(c + i) = (char)(((int)(*(c + i))) - 63);
		}
		else
		if (*(c + i) == 't' || *(c + i) == 'T')
		{
			if (*(c + i) == 'T')
			{
				*(c + i) =  (char)((int)(*(c + i)) - 29);
			}
			else
			 *(c + i) = (char)(((int)(*(c + i))) - 61);
		}
		else
		if (*(c + i) == 'l' || *(c + i) == 'L')
		{
			if (*(c + i) == 'L')
			{
				*(c + i) =  (char)((int)(*(c + i)) - 27);
			}
			else
			 *(c + i) = (char)(((int)(*(c + i))) - 59);
		}

	}
	return (c);
}
