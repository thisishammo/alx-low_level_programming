#include<unistd.h>
#include<stdio.h>
/**
<<<<<<< HEAD
* print_alphabet - prints alphabets
* Return: void
=======
* print_alphabets - prints alphabets
* Return: 0 means successful otherwise error
>>>>>>> 62b54ef561a71bf79cc0aacc8e43a8083ca8bba5
*/
void print_alphabet(void);
/**
* main - excutes code
* Return: 0 means successful otherwise error
*/
int main(void)
{
	print_alphabet();
	return 0;
}
void print_alphabet(void)
{
	int i;
	
	for (i = 97; i <= 122; i++)
	{
			char b = (char)i;
			
			putchar(b);
	}
		putchar('\n');
}
<<<<<<< HEAD
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
=======

>>>>>>> 62b54ef561a71bf79cc0aacc8e43a8083ca8bba5
