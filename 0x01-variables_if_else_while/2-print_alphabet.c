#include <stdio.h>

/**
 * main - print all lowercase alphabet
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
