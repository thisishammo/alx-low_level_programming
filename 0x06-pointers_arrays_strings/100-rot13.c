#include"main.h"
/**
* rot13 - encrypted data using the ROT13
* @s: string to be encrypted
* Return: Pointer to s
*/
char *rot13(char *s)
{
	int i, ascii;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		ascii = (int)(*(s + i));
		if (ascii >= 65 && ascii <= 77)
		{
			*(s + i) = (char)(ascii + 13);
		}
		else
		if (ascii >= 78 && ascii <= 90)
		{
			*(s + i) = (char)(ascii - 13);
		}
		else
		if (ascii >= 97 && ascii <= 109)
		{
			*(s + i) = (char)(ascii + 13);
		}
		else
		if (ascii >= 110 && ascii <= 122)
		{
			*(s + i) = (char)(ascii - 13);
		}

	}
	return (s);
}
