#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string to add to
 * @s2: string to add
 * Return: pointer to new string or NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k, a, b;

	a = 0;
	if (s1 != NULL)
	{
		while (s1[a] != '\0')
			a++;
	}
	j = a;
	b = 0;
	if (s2 != NULL)
	{
		while (s2[b] != '\0')
			b++;
	}
	j += b;
	str = malloc(sizeof(char) * (j + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
	{
		str[i] = s1[i];
	}
	for (k = 0; k < b; k++, i++)
	{
		str[i] = s2[k];
	}
	str[i] = '\0';
	return (str);
}
