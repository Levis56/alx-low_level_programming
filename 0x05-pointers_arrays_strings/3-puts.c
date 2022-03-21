#include "main.h"

/**
 * _puts - prints a string.
 * @str: A pointer to an int to be changed.
 *
 * Return: void (is correct/success)
 */

void _puts(char *str)
{
char *c;
int l;

c = str;

for (l = 0; c[l]; l++)
{
_putchar (c[l]);
}

_putchar('\n');
}
