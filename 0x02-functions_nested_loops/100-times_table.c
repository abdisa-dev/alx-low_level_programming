#include "main.h"

/**
 * print_times_table - prints input number times table
 * @n: input number from the user
 */

void print_times_table(int n)
{
	int a, b, c;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;

			if (b == 0)
			{
				_putchar(c + '0');
			}
			else if (n >= 9 && n <= 15)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (n != 0)
			{
				_putchar(c + '0');
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
