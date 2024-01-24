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
	unsigned int i, j, s2_len;

	s2_len = (n >= strlen(s2) ? strlen(s2) : n);
	str = malloc(sizeof(*str) * (strlen(s1) * s2_len));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)strlen(s1); i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n && n <= (unsigned int)strlen(s2); j++)
	{
		str[i + j] = s2[j];
	}
	if (n > (unsigned int)strlen(s2))
	{
		for (j = 0; j < (unsigned int)strlen(s2); j++)
		{
			str[i + j] = s2[j];
		}
	}
	str[j + i] = '\0';
	return (str);
}
