#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number start from input upto 98
 * @n: input number
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d", 98);
	printf("\n");
}
