#include<stdio.h>
/*
 * * main - prints the specified text
 * * Return: 0 means that it was successful otherwise not successful
 * */
int main(void)
{
	int ch=sizeof(char);
	int i=sizeof(int);
	int long_int=sizeof(long int);
	int llint=sizeof(long long int);
	int ft=sizeof(float);
	printf("Size of a char: %d byte(s)\n",ch);
	printf("Size of an int: %d byte(s)\n",i);
	printf("Size of a long int: %d byte(s)\n",long_int);
	printf("Size of a long long int: %d byte(s)\n",llint);
	printf("Size of a float: %d byte(s)\n",ft);
	return (0);
}
