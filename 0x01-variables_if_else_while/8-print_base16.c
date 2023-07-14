#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = '0';

	while (x <= 'f')
	{
		putchar(x++);
		if (x == ':')
		{
			x = 'a';
		}
	}
	putchar('\n');
	return (0);
}
