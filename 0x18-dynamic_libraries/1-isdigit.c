#include "main.h"

/**
 * _isdigit - Prints numbers between 0 and 9
 * @c: this is a parameter
 * Return: returns 1 or 0 depending
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
