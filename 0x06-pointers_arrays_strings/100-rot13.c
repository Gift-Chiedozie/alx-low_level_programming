#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: the encoded string
 * Return:  returns the encoded string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			int j = 0;

			while (j < 13)
			{
				s[i]++;

			if (s[i] > 'z') s[i] = 'a';

			if (s[i] > 'Z') s[i] = 'A';
			j++;
			}
		}
			i++;
	}
	return s;
}
