#ifndef main_h
#define main_h
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	int i;
	
	for (i = 97; i <= 122; i++)
	{
		char a = (char)i;
		
		write(1, &a, 1);
	}
}
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);

#endif
