#include "main.h"
#include <stdio.h>
/**
 * create_array - creates array of char and init with a char
 * @size: size if memory to be allocated
 * @c: char to stored on the allocated space
 * Return: array of chars
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
