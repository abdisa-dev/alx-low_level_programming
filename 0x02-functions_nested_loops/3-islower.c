#include "main.h"

/**
 * _islower - return if c is lower or not 1 or 0 relatively
 * Return: 1 or 0 depend on c value
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
