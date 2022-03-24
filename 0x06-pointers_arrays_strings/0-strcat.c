#include "main.h"

/**
 * _strcat - concatenates 2 strings.
 * @dest: Pointer to the character to be changed.
 * @src: Point to another character to be changed.
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;
while (dest[a] != '\0')
{
a++;
}

b = 0;
while (src[b] =! '\0')
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';

return (dest);
}