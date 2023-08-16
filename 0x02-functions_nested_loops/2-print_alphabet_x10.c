#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 x
 *
 */

void print_alphabet_x10(void)
{
    char a;

    int counter;

    for (counter = 0; counter < 10; counter++)
    {
        for (a = 'a'; a < 'z'; a++)
        {
            _putchar(a);
        }
        _putchar('\n');
    }
}