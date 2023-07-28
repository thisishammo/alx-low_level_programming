#include"main.h"
#include<stdlib.h>
/**
* cap_string - capitalizes all words of a string
* @c: string to be modified
* return: pointer to c
*/
char *cap_string(char *c)
{
	char *buffer = (char*)malloc(1000);
	int switcher = 0, i;

	for (i = 0; *(c + i) != '\0'; i++)
	{
		switch (*(c + i))
		{
			case '\n':
			buffer[i] = *(c + i);
			switcher = 1;
			break;
			case '\t':
			buffer[i] = *(c + i);
			switcher = 1;
			break;
			case ' ':
			buffer[i] = *(c + i);
			switcher = 1;
			break;
			case ',':
			buffer[i] = *(c + i);
			switcher = 1;
			break;
			case '.':
			buffer[i] = *(c + i);
			switcher = 1;
			break;
			case ';':
			buffer[i] = *(c + i);
			switcher = 1;
			break;
			case '!':
			buffer[i] = *(c + i);
			switcher = 1;
			break;
			case '?':
			buffer[i] = *(c + i);
			switcher = 1;
			break;
			case '\"':
			buffer[i] = *(c + i);
			switcher = 1;
			break;
			case '(':
			buffer[i] = *(c + i);
			switcher = 1;
			break;
			case ')':
			buffer[i] = *(c + i);
			switcher = 1;
			break;
			case ((char)(121)):
			buffer[i] = *(c + i);
			switcher = 1;
			break;
			case ((char)(123)):
			buffer[i] = *(c + i);
			switcher = 1;
			break;


		}
		if (switcher == 1)
		{
			buffer[i] = (char)((int)*(c + i) - 32);
			switcher = 0;
		}
	}
	for (i = 0; buffer[i] != '\0'; i++)
	{
		*(c + i) = buffer[i];
	}
	return (c);
}
