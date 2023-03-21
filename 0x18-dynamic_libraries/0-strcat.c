#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates the value of strings
 * @dest: parameter 1
 * @src: parameter 2
 * Return: pointer back to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
