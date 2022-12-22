#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates the value of a astring
 * @dest: string to be appended
 * @src: string to be concatenated
 * @n: integer parameter to compare with
 * Return: returns a new string
 */

char *_strcat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
