#include<stdio.h>
void print_alphabet_x10(void);
/**
* main - excutes code
* Return: 0 means successful otherwise error
*/
int main(void)
{
	print_alphabet_x10();
	return (0);
}
/**
* print_alphabet_x10 - prints alphabets 10x
* Return: void always
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	int a;

	for (a = 97; a <= 122; a++)
		{
			char b = (char)a;

			putchar(a);
		}
		putchar('\n');
	}
}
