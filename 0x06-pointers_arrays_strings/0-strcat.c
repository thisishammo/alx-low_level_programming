#include"main.h"
/** _strcat - concatenates two strings
* @dest: where the concatenated string will go
* @src: source of strings
* 
*Return: pointer to destination
*/
char *_strcat(char *dest, char *src)
{
	char *cat[200];
	int i;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		*(cat + i) = *(dest + i);
	}
	for (i += 1; *(src + i) != '\0'; i++)
	{
		*(cat + i) = *(src + i);
	}
	return (*cat);
}
