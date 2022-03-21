#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: Pointer to char to be changed.
 * @src: Poiter to char to be changed.
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

int x;
x = 0;

while (src[x] != '\0')
{
dest[x] = src[x];
x++;
}
dest[x] = '\0';

return (dest);
}
