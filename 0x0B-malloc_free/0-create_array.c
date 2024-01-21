#include "main.h"

/**
 * create_array - creates array of char and init with a char
 * @size: size if memory to be allocated
 * @c: char to stored on the allocated space
 * Return: array of chars
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int counter;

	a = malloc(size * sizeof(*a));

	if (size <= 0 || a == NULL)
		return (NULL);

	while (size > counter)
	{
		a[counter] = c;
		counter++;
	}

	return (a);
}
