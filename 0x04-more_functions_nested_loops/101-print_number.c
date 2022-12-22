#include "main.h"
#include <stdio.h>

/**
 * print_number - prints int with putchar
 * @a: takes number, hello
 * Return: void
 */

void print_number(int a)
{
	unsigned int b;

	if (a < 0)
	{
		_putchar('-');
		b = -a;
	}
	else
	{
		b = a;
	}
	if (b / 10 != 0)
		print_number(b / 10);
	_putchar((b % 10) + '0');
}
