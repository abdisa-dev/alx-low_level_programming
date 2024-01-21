#include "main.h"

/**
 * _strdup - set a copy of str
 * @str: string to be copied
 * Return: address of copied str
*/

char *_strdup(char *str)
{
	unsigned int str_len, counter = 0;
	char *dup_str;

	if (str == NULL)
		return (NULL);
	str_len = strlen(str) + 1;
	dup_str = malloc(sizeof(*str) * str_len);

	if (dup_str == NULL)
		return (NULL);

	while (counter < str_len)
	{
		dup_str[counter] = *str++;
		counter++;
	}
	dup_str[++counter] = '\0';
	return (dup_str);
}
