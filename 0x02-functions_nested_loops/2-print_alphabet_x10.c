#include<unistd.h>
<<<<<<< HEAD
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
=======
#include<stdio.h>
/**
* print_alphabets - prints alphabets
* Return: 0 means successful otherwise error
*/
void print_alphabet_x10(void);
/**
* main - excutes code
* Return: 0 means successful otherwise error
*/
int main(void)
{
	print_alphabet_x10();
	return 0;
}
void print_alphabet_x10(void)
{
	int i;
	
	for (i=0; i<10; i++)
	{
		int a;
		
		for (a = 97;a <= 122; a++)
		{
			char b=(char)a;
			
			putchar(a);
		}
		putchar('\n');
	}
>>>>>>> 62b54ef561a71bf79cc0aacc8e43a8083ca8bba5
}
