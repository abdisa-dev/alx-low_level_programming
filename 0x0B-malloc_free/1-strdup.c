#include "main.h"

/**
 * _strdup - set a copy of str
 * @str: string to be copied
 * Return: address of copied str
*/

char *_strdup(char *str)
{
	unsigned int counter = 0;
	unsigned int str_len = ++strlen(str);
	char *dup_str = malloc(sizeof(*str) * str_len);

	if (str == NULL || dup_str == NULL)
		return (NULL);
	while (counter < str_len)
	{
		dup_str[counter] = *str++;
		counter++;
	}
	dup_str[++counter] = '\0';
	return (dup_str);
}
