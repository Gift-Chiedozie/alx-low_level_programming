#include "main.h"
#include <string.h>

/**
 * *_memset - Fills the first set of n bytes of the memory area
 * pointed to by @s with the constant byte @c.
 * @*s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description _memset: over there.
 *
 * Return: A pointer to the fills area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] =  value;

	return (memory);
}
