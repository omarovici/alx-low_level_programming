#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	char *y = str;
	int cnt = 0;
	int i;

	while (*y != '\0')
	{
		cnt++;
		y++;
	}
	for (i = 0 ; i < cnt ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
