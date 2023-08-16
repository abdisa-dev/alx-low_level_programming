#include "main.h"

/**
 * print_sign - print if number is greater less or equal to 0
 * Return: 1, -1, 0 respectivly
 * @n: input for n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
