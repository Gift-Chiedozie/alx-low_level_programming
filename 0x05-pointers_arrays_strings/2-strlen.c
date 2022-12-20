#include "main.h"
#include <string.h>

/**
 * _strlen - Prints the length of a string
 * @s: parameter fo the string
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}

	return (len);
}
