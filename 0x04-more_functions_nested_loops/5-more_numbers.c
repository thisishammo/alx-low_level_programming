#include"main.h"
/**
* more_numbers - prints 0 to 14 x10
* return: void
*/
void more_numbers(void)
{
	int h, k, i, a;
	char z[2];

	z[0] = '1';

	for (h = 0; h < 10; h++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k <= 9)
			{
				_putchar(k + '0');
			}
			else
			{
				if (k == 10)
				{
					a = 58 - k;
					z[1] = (char)a;
				}
				else
				a = 38 + k;
				z[1] = (char)a;
				for (i = 0; i < 2; i++)
				{
					_putchar(z[i]);
				}
			}
		}
		_putchar('\n');
	}
}
