#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)
{
	long a, b;

	a = 612852475143;
	for (b = 2; b < n; b++)
	{
		while (a % b == 0)
			a = a / b;
	}
	printf("%lu\n", a);

	return (0);
}
