#include "main.h"
#include <stdio.h>

/**
 * main - print the all passed arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0
*/

int main(int __attribute__((unused))argc, char __attribute__((unused))*argv[])
{
    int i;

    for(i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return (0);
}
