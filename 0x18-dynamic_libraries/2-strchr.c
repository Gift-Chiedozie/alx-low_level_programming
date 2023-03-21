#include "main.h"

/**
 * _strchr - String character
 * @s: string character given
 * @c: another string character
 *
 * Return: Returns a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
