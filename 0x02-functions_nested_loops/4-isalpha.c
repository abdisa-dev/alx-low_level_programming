#include "main.h"

/**
 * _isalpha - return all alpahabets
 * Return: 1 depend on the value of c
 * @c: charachter that recives input
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c <= 97 && c >= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
