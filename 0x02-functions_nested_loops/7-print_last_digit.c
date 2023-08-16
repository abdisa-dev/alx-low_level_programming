#include "main.h"

/**
 * print_last_digit - last digit of number
 * Return: the last digit of the input
 * @n: input number
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit);
	return (last_digit);
}
