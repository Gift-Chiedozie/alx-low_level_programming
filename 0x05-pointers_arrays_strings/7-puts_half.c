#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: a string parameter
 */

void puts_half(char *str)
{
	int len, half_len, i;

	len = strlen(str);
	half_len = len / 2;

	if (len % 2 == 1)
	{
		half_len = (len + 1) / 2;
	}

	for (i = half_len; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
