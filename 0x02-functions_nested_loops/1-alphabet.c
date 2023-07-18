#include<unistd.h>
/**
* print_alphabet - prints alphabets
* Return: void
*/
void print_alphabet(void)
{
	int i = 97;

	for (i = 97; i <= 122; i++)
	{
		char letter = (char)i;

		write(1, &letter, 1);
	}
}
/**
* main - executes the print_alphabet funtion
* Return: 0 means successful
*/
int main(void)
{
	print_alphabet();
	write(1, "\n", 1);
	return (0);
}
