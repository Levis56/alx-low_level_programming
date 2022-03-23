#include "main.h"

/**
 * strcat - Concatenates two strings
 * @dest: Pointer to the string to be concatenated upon.
 * @src: Source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *strcat(char *dest, const char *src)
{
int a, b;
a = b = 0;

while (*(dest + a))
	a++;
while ((*(dest + a) = *(src + b)))
{
	a++;
	b++;
}

return (dest);
}
