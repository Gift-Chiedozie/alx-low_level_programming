#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar("%d", num);
	putchar("\n");
	return (0);
}
