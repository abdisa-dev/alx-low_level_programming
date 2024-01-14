#include "main.h"

/**
 * _pow_recursion - function to get number powered
 * @x: a number to be raised
 * @y: exponent
 * Return: the powered value
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
