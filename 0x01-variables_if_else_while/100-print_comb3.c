#include <stdio.h>

/**
 * main - print all two digit combination
 * Return: always 0
 */

int main(void)
{
	int a, b;

	for (a = '0'; a <= '8'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			if (b > a)
			{

				putchar(a);
				putchar(b);
				if (b != '9' || a != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
