#include "main.h"

/**
 * print_triangle - Prints triangle
 * @size: size of a triangle
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x <= (size - 1); x++)
		{
			for (y = 0; y < (size - 1) - x; y++)
			{
				_putchar(' ');
			}
			for (z = 0; z <= x; z++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
