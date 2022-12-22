#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates the value of a astring
 * @dest: string to be appended
 * @src: string to be concatenated
 * Return: returns the pointer to @dest
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
