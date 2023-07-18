#include"main.h"
#include<string.h>
/**
* main - prints _putchar
* Return: 0 means successful
*/
int main(void)
{
	char j[] = "_putchar";
	int len = strlen(j);
	int i;

	for (i = 0; i < len; i++)
	{
	_putchar(j[i]);
	}
	return (0);
}
