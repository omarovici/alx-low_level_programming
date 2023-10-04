#include "main.h"

/**
 * create_array - creates an array and initializes it
 * @size: size of array
 * @c: the char to initialize it to
 * Return: pointer to the array NULL if size = 0 || if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
	{
		str[i] = c;
	}
	return (str);
}
