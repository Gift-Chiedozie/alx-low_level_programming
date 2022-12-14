#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabets ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
		if (c < 10)
		{
			_putchar(c);
			c++;
		}
	}

	_putchar('\n');
}

