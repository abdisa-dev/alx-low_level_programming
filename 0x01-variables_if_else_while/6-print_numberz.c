#include <stdio.h>

/**
 * main - print all decimal number with putchar
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
