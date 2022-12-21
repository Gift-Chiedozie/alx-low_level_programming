#include "main.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: parameter s
 */
void rev_string(char *s)
{
	char temp;
	int a, str1, str2;

	str1 = 0;
	str2 = 0;

	while (s[str1] != '\0')
		str1++;

	str2 = str1 - 1;
	for (a = 0; a < str1 / 2; a++)
	{
		temp = s[a];
		s[a] = s[str2];
		s[str2] = temp;
		str2 -= 1;
	}
}
