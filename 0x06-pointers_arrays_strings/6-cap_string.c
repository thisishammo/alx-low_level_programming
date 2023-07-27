#include"main.h"
/**
* cap_string - capitalizes all words of a string
* @c: string to be modified
* return: pointer to c
*/
char *cap_string(char *c)
{
	int h;

	for (h = 0; *(c + h) != '\0'; h++)
	{
		if (h == 0)
		{
			if ((int)*(c + h) >= 97 && (int)*(c + h) <= 122)
			{
				*(c + h) = (char)(((int)*(c + h)) - 32);
			}
		}
		else
			if (*(c + h) == '\t' || *(c + h) == ' ' || *(c + h) == '\n' || *(c + h) == ',' || *(c + h) == ';' || *(c + h) == '.' || *(c + h) == '!' || *(c + h) == '?' || *(c + h) == '\"' || *(c + h) == '(' || *(c + h) == ')' || *(c + h) == '{' || *(c + h) == '}')
			{
				if ((int)*(c + h) >= 97 && (int)*(c + h) <= 122)
				{
					*(c + h) = (char)(((int)*(c + h)) - 32);
				}	
			}
	}
	return (c);
}
