#include "main.h"

/**
 * more_numbers - Prints more numbers
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
			_putchar(j + '0');
	}
	for (j = 10; j <= 14; j++)
	{
		_putchar(j + 'A' - 10);
	}

	_putchar('\n');
}


