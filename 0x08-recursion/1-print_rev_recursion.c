#include "main.h"

/**
 * _print_rev_recursion - reverse function
 * @s: input to be reverse
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
	}
	_putchar(*s);
}
