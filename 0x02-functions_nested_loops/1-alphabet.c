#include<unistd.h>
#include<stdio.h>
/**
* print_alphabets - prints alphabets
* Return: 0 means successful otherwise error
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

