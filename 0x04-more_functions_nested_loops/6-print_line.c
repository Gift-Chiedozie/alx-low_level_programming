#include "main.h"

/**
 * print_line - Prints line
 * @n: a parameter
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; n < n; i++)
			_putchar(95);
		_putchar('\n');
	}
}
