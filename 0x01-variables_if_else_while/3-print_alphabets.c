#include <stdio.h>

/**
 * main - print all alphabet
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
