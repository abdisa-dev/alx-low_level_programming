#include "main.h"

/**
 * times_table - displat 9 times table
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c <= 9)
			{
				putchar(c + '0');
				if (b != 9)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
			}
			else if (c >= 9)
			{
				putchar(c / 10 + '0');
				putchar(c % 10 + '0');
				if (b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
}
