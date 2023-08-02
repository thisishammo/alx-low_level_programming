#include"main.h"
/**
* _pow_recursion - raises x to power y
* @x: number to be raised
* @y : power
* Return: answer
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
		if (y == 1)
		{
			return (x);
		}
		else
			if (y == 0)
			{
				return (1);
			}
			else
				return (x * _pow_recursion(x, y - 1));
}
