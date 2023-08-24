#include <stdio.h>

/**
 * main - print base 16 chars
 * Return: always 0
 */

int main(void)
{
	int zero, a;

	for (zero = '0'; zero <= '9'; zero++)
	{
		putchar(zero);
	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
