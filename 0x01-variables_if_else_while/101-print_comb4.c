#include <stdio.h>

/**
 * main - print all three digit number
 * Return: always 0
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '7'; a++)
	{
		for (b = '1'; b <= '8'; b++)
		{
			for (c = '2'; c <= '9'; c++)
			{
				if (b > a && c > b)
				{

					putchar(a);
					putchar(b);
					putchar(c);
					if (c != '9' || b != '8' || a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
