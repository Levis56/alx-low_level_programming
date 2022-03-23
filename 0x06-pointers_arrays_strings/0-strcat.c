#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: A Pointer to a character that will be changed.
 * @src: Another pointer to character to be changed.
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
while(src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';

return (dest);
}
