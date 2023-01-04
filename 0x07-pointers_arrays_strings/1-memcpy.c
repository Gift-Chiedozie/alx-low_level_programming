#include "mian.h"

/**
 * _memcpy - copies n bytes from memory area to dest
 * @dest: A character
 * @src: Another character
 * @n: An unsigned integer
 *
 * Return: String
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
