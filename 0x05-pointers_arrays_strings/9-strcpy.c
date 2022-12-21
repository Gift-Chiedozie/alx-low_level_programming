#include "main.h"
#include <string.h>

/**
 * _strcpy - Copies the value of one char to another
 * @dest: parameter 1
 * @src: parameter 2
 * Return: value should be dest
 */

char *_strcpy(char *dest, char *src)
{
	size_t a, b;

	for (a = 0; a < b && src[a] != '\0'; a++)
		dest[a] = src[a];
	for (; a < b; a++)
		dest[a] = '\0';
	return (dest);
}
