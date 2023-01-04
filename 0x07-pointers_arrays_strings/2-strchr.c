#include "main.h"

/**
 * _strchr - String character
 * @s: another string character
 * @c: and another string character
 *
 * Return: Returns a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int index = 0, b;

	while (s[index])
		index++;
	for (b = 0; b < index; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
