#include "main.h"

/**
 * more_numbers - Prints more numbers
 * Return: 0
 */

void more_numbers(void)
{
	int x,
	int j;

	for (x = 0; x < 10; x++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
	}

	_putchar('\n');
}
