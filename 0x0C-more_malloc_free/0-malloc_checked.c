#include "main.h"

/**
 * malloc_checked - prepares a memory space depend on the given arg
 * @b: memory size to be allocated
 * Return: the allocated memory addr
*/

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}
