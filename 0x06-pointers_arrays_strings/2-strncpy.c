#include "main.h"

/**
 * *_strncpy - c function that copies string
 * terminates null byte, using at most an inputed number of strings
 * if the length of the source string is less than the maximum bytes,
 * the remainder of the destination string is filled with null bytes.
 * works identically with the standard library function 'strncpy'
 * @dest: buffer storing the string copy
 * @src: source of the string
 * @n: max number of bytes to be compied
 * Return: returns the  number of bytes copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		des[i] = '\0';

	return (dest);
}
