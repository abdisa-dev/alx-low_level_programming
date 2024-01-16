#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print the all passed arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 if valid argument
*/

int main(int __attribute__((unused))argc, char __attribute__((unused))*argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("%d\n", 0);

			return (0);
		} else if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			for (j = 0; j < (int)strlen(argv[i]); j++)
			{
				if (argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				} else
				{
					sum += atoi(argv[i]);
				}
			}
		} else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
