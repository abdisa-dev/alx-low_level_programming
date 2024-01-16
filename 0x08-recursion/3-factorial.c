#include "main.h"

/**
 * factorial - factorial of the given number
 * @n: input value
 * Return: factorial of the input number
*/

int factorial(int n)
{
	int total = 0;

	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}

	total = n * factorial(n - 1);
	return (total);
}
