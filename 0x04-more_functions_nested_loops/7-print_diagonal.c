#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal using \ character.
 * @n: Number of \ to be printed.
 * Return: 0 Always (is correct/success).
 */
void print_diagonal(int n)
{
int a, b;

if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
_putchar(' ');
_putchar('\\');

if (a == n - 1)
continue;

_putchar('\n');
}
}

_putchar('\n');
}
