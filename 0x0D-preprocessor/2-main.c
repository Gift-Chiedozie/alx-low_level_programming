#include <stdio.h>

/**
 * main - writes a function that prints the name of
 * current file a program was compiled frim
 * Return: Always 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
