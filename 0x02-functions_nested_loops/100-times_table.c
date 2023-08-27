#include "main.h"
#include <stdio.h>
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
				putchar(c + '0');
			}
			else if (c <= n)
			{
				putchar(',');
				putchar(' ');
				putchar(c + '0');
			}
			else if (c >= n)
			{
				putchar(',');
				putchar(' ');
				putchar(c / 10 + '0');
				putchar(c % 10 + '0');
			}
		}
		putchar('\n');
	}
}

int main(void)
{
	print_times_table(3);
	return (0);
}