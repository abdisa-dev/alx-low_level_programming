<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - print input data in reverse
 * @s: input data
=======
#include "main.h"

/**
 * _print_rev_recursion - reverse function
 * @s: input to be reverse
>>>>>>> 023473b1dc49d6adaf85079f799f9be9825cd578
*/

void _print_rev_recursion(char *s)
{
<<<<<<< HEAD
    if (*s)
    {
        _print_rev_recursion(s + 1);
        putchar(*s);
    }

}

int main()
{
    _print_rev_recursion("ddrrr");
    return 1;
}
=======
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
>>>>>>> 023473b1dc49d6adaf85079f799f9be9825cd578
