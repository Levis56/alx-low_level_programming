#include "main.h"

/**
 * puts_half - prints second half characters of a string.
 * @str: A pointer to the int to be changed.
 * Return: void (is correct/success).
 */

void puts_half(char *str)
{

int x, last;

x = 0;
while (str[x] != '\0')
{
x++;
}

last = (x + 1) / 2;

for (x = last; str[x]; x++)
{
_putchar (str[x]);
}

_putchar ('\n');
}
