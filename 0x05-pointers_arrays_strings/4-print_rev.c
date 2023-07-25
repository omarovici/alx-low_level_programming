#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (; count > 0; count--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
