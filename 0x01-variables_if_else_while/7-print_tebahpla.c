#include <stdio.h>

/**
 * main - print all alphabet in reverse
 * Return: always 0
 */

int main(void)
{
	int z;

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
