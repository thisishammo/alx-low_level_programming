#include<unistd.h>
/**
* print_alphabet_x10 - prints alphabets x10
* Return: void
*/
void print_alphabet_x10(void)
{
	int i = 97;
	int a = 10;

	for (a = 10; a >= 1; a++)
	{
	for (i = 97; i <= 122; i++)
	{
		char letter = (char)i;

		write(1, &letter, 1);
	}
	}
}
/**
* main - checks code
* Return: 0 always
*/
int main(void)
{
	print_alphabet_x10;
	write(1, "\n", 1);
	return (0);
}
