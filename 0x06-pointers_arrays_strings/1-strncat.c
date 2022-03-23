#include "main.h"

/**
 * _strncat - Concatenates 2 strings using at most an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: Thw string to be appended to dest.
 * @n: Number of bytes to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = b = 0;
	while(*(dest + a))
		a++;
	while (b < n && *(src + b);)
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	if (b < n)
		*(dest + a) = *(src + b);
	return (dest);
}
