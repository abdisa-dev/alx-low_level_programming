#include "main.h"

/**
 * _abs - return absolute value of input
 * Return: absolute values of input
 * @n: user input
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
