#include<unistd.h>
/**
 * main - prints the specified message
 * Return: 1 indicating error
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 100);
	return (1);
}
