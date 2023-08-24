#include <stdio.h>

/**
 * main - print all lowercase alphabet except e and q
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}
	putchar('\n');

	return (0);
}
