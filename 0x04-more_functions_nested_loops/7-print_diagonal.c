#include "main.h"

/**
 * print_diagonal - Prints diagonal
 * @n: a parameter
 */

void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
