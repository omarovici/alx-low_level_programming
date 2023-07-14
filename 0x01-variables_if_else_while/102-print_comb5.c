#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

for (a = 0; a <= 99; a++)
{
for (b = 0; b <= 99; b++)
{
if (a < b)
{
putchar('0' + (a / 10));
putchar('0' + (a % 10));
putchar(' ');
putchar('0' + (b / 10));
putchar('0' + (b % 10));
if (a != 98 || b != 99)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
