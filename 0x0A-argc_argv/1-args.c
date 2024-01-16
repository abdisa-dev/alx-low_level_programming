#include "main.h"
#include <stdio.h>

/**
 * main - print the length of passed arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0
*/

int main(int __attribute__((unused))argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
