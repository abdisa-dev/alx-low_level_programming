#include "main.h"

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
	unsigned int i, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(char) * strlen(s1) + 1);
	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
	{
		str[len++] = s1[i];
	}
	for (i = 0; i < n && s2[i]; i++)
	{
		str[len++] = s2[i];
	}

	str[len] = '\0';
	return (str);
}
