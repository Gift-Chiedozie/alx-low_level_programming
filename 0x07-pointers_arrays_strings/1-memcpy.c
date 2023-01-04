#include "main.h"

/**
 * _memcpy - copies n bytes from memory area to dest
 * @dest: is destination memory
 * @src: is source memory
 * @n: number of bytes to copied
 * Return: String copied from source
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
