#include <stdio.h>

/**
 * main - Print all combinations of single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 16; num < 58; num++)

		putchar(num);

	if (num != 57)

	{

		putchar(',');

		putchar(' ');

	}

	putchar('\n');

	return (0);

}
