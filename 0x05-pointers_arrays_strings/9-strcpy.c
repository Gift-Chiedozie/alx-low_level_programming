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
	if (!dest || !src)
	{
		return NULL;
	}

	char *p = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (p);
}