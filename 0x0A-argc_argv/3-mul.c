#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the all passed arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 if valid argument
*/

int main(int __attribute__((unused))argc, char __attribute__((unused))*argv[])
{
	if (argc == 3)
	{
		printf("%d", (atoi(argv[1]) * atoi(argv[2])));
	} else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
