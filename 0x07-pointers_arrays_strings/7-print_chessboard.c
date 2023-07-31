#include"main.h"
/**
* print_chessboard - prints the layout of
* a chessboard
* @a: pointer to an array
* return: nothing
*/
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 64; i++)
	{
		if (i == 0)
		{
			_putchar((*a)[i]);
		}
		else
		if (i == 7 || i == 15 || i == 23 || i == 31 || i == 39
			      || i == 47 || i == 55 || i == 63)
		{
			_putchar((*a)[i]);
			_putchar('\n');
		}
		else
			_putchar((*a)[i]);
	}
}
