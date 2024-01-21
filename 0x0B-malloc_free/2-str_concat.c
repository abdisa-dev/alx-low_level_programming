#include "main.h"
#include <stdio.h>

/**
 * str_concat - merge the paramets into one
 * @s1: the first string
 * @s2: the second string
 * Return: the concatinated version
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int counter, len;
	char *concatinator;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	len = ((strlen(s1) + strlen(s2)) + 1);
	concatinator = malloc(sizeof(*concatinator) * len);
	counter = 0;

	while (*s1 || *s2)
	{
		if (*s1)
		{
			concatinator[counter] = *s1++;
			counter++;
		} else if (*s2)
		{
			concatinator[counter] = *s2++;
			counter++;
		}
	}

	concatinator[++counter] = '\0';
	return (concatinator);
}
