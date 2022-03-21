#include "main.h"

/**
 * _strlen -Length of the string
 * @s: A pointerto int to be updated
 *
 * Return: void (is Correct/Success)
 */

int _strlen(char *s)

{
int x;

x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}
