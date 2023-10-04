#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: NULL if str = NULL or inusfficient memory, or a pointer if success
 */

char *_strdup(char *str)
{
	char *str1;
	int i, r;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	str1 = malloc(sizeof(char) * (i + 1));
	if (str1 == NULL)
		return (NULL);
	for (r = 0; r < i; r++)
	{
		str1[r] = str[r];
	}
	return (str1);
}
