#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x--);
	}
	putchar('\n');
	return (0);
}
