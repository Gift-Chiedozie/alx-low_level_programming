#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of integers
 * @a: parameter swaper
 * @b: parameter swaper as well
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
