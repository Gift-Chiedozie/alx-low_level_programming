#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of an element of integers
 * @a: parameter 1
 * @n: parameter 2
 */

void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr <= n; arr++)
	{
		if (arr < n - 1)
			printf("%d, ", a[arr]);
	}
	printf("\n");
}
