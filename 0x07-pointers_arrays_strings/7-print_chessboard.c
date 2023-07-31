#include"main.h"
#include<stdio.h>
/**
* print_chessboard - prints the layout of
* a chessboard
* @a: pointer to an array
* return: nothing
*/
void print_chessboard(char (*a)[8])
{
	int i, h = 1;

	for (i = 0; i < 64; i++)
	{
		if (i == 0)
		{
			putchar((*a)[i]);
		}
		else
		if (i == 7 || i == 15 || i == 23 || i == 31 || i == 39
			      || i == 47 || i == 55 || i == 63)
		{
			putchar((*a)[i]);
			putchar('\n');
		}
		else
			putchar((*a)[i]);
	}
}
