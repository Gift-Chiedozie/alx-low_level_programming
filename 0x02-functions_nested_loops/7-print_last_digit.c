#include "main.h"

/**
 * print_last_digit - Prints last digit of an integer
 * @n: an argument
 * Return: returns 0
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');

	return (x);
}
