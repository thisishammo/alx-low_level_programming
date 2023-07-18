#include<unistd.h>
/**
* main - prints alphabets
* Return: 0 means successful otherwise error
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
int main(void)
{
	print_alphabet();
	write(1, "\n", 1);
	return (0);
}
