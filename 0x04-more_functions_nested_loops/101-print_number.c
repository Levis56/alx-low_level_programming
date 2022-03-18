#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: prints int.
 * Return: 0 always is a success/correct.
 */
void print_number(int n)
{
 unsigned int a, i = 1, b;

if (n < 0)
{
_putchar('-');
b = -n
a = b;
}

else
{
b = n;
a = b;
}
if (n == 0)
	_putchar('0');

else
{
	while (a > 9)
	{
		i *= 10;
		a /= 10;
	}
	while (i > 1)
	{
		_putchar((b / i) + '0');
		b %= i;
		i /= 10;
	}
	_putchar(b + '0');
}
}
