#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - concat string n length times
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to concatinated strings
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n && s2[j]; j++)
	{
	printf("i - %d j - %d\n", i , j);
		str[i + j] = s2[j];
	}
	str[(j + i) + 1] = '\0';
	return (str);
}
