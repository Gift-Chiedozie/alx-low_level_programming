#include "main.h"
#include <string.h>

/**
 * _strlen - Prints the length of a string
 * @s: parameter fo the string
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int str;

	for (; *s != '\0'; s++)
	{
		str += 1;
	}

	return (str);
}
