#include "main.h"
#include <string.h>

/**
 * _puts - writes a character in the stdout
 * @str: a parameter for thr outpus string
 */

void _puts(char *str)
{
	for (; *str != '\0'; *str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
