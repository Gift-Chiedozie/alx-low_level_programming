#include "main.h"
#include <string.h>

/**
 * _strcpy - Prints the copy of stings into chars
 * @dest: parameter 1
 * @src: parameter 2
 * Return: dest as the value
 */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (a);
}
