#include<unistd.h>
/**
 * main - prints the specified message
 * Return: 1 indicating error
*/
int main(void)
{
	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	
	write(2, txt, 100);
	return (1);
}
