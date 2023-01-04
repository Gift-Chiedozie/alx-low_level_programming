#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: The chessboard to be printed
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int indx1, indx2;

	for (indx1 = 0; indx1 <= 7; indx1++)
	{
		for (indx2 = 0; indx2 < 8; indx2++)
			_putchar(a[indx1][indx2]);
	}
	_putchar (10);
}
