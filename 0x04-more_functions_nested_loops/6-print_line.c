#include "main.h"

/**
 * print_line - Draws a straight line using underscore (_) symbol.
 *
 * @n: Number of _ to be printed.
 * Return: 0 always (is Success/Correct)
 */
void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n; i++)
_putchar('_');
}

_putchar('\n');
}
