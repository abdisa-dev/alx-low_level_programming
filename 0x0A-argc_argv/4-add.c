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
	int i, sum;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("%d\n", 0);

			return (0);
		} else if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			sum += atoi(argv[i]);
		} else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
