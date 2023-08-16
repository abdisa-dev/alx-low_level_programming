#include "main.h"

/**
 * main - print every single char in variable a
 * Return: 0
 *
 */

int main(void)
{
	char a[] = "_putchar";

	int b;

	for (b = 0; b < 8; b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');
	return (0);
}
