#include<stdio.h>
#include<unistd.h>
/**
* main - prints _putchar
* Return: 0 means successful
*/
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
