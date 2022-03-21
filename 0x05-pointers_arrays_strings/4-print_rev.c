#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 * @s: A pointer to an int to be changed
 * Return: void (is correct/success)
 */

void print_rev(char *s)
{
int m;

m = 0;
while (s[m] != '\0')
{
m++;
}

for (m = m - 1; m >= 0; m--)
{
_putchar (s[m]);
}

_putchar ('\n');
}

