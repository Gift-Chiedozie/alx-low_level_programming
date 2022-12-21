#include "main.h"
#include <string.h>

/**
 * *strcpy - Prints the copy of stings into chars
 * @dest: parameter 1
 * @str: parameter 2
 * Return: dest as the value
 */

char *strcpy(char *dest, const char *str)
{
	size_t a, b;

	for (b = 0; b < a && src[b] != '\0'; b++)
		dest[b] = src[b];
	for ( ; b < a; b++)
		dest[b] = '\0';

	return (dest);
}
