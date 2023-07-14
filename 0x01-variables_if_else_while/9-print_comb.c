#include<stdio.h>
/**
* main - prints numbers well
* Return: 0 means success otherwise
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if(i != 57)
		{	
		putchar(44);
		putchar(32);
		}
	}
	putchar(10);
	return (0);
}
