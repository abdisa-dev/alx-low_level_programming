#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - print input data in reverse
 * @s: input data
*/

void _print_rev_recursion(char *s)
{
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