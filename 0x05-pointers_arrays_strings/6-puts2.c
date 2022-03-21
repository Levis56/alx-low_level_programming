#include "main.h"

/**
 * puts2 - Prints every character of a string.
 * @str: A pointer to int to be changed.
 * Return: void (is correct/success).
 */

void puts2(char *str)
{
int x;

for (x = 0; str[x] != '\0'; x++)
{
if (x % 2 == 0)
_putchar (str[x]);
}

_putchar ('\n');
}
