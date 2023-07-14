#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	char c = 'a';

	while (1)
	{
		putchar(c);
		if (c == 'z')
		{
			c = 'A';
			continue;
		}
		if (c == 'Z')
			break;
		c++;
	}
	putchar('\n');
	return (0);
}
