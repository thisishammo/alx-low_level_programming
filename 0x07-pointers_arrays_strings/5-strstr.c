#include"main.h"
#include<stdlib.h>
/**
* _strstr - locates substring
* @haystack: string to be used
* @needle: string to be searched
* Return: pointer or NULL if no string found
*/
char *_strstr(char *haystack, char *needle)
{
	int i, h, k = 0, n = 0;
	char *string = (char*)malloc(100);

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (h = 0; *(needle + h) != '\0'; h++)
		{
			if ((*needle + h) == *(haystack + i))
			{
				k++;
			}
		}
	}
	while (*(needle + n) != '\0')
	{
		n++;
	}
	if (n != k)
	{
		return (NULL);
	}
	else
		return (needle);
}
