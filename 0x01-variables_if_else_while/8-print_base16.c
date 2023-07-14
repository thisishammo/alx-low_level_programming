#include<stdio.h>
/**
* main - prints hex numbers
* Return: 0 means successful otherwise error
*/
int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
		if (i < 58)
		{
			putchar(i);
		}
		else if (i > 96 && i < 103)
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}
