#include <stdio.h>

/**
 * main - Prints all combinations of a two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones = 0;
	int tens = 0;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tens > ones))) /* eliminates repitition */
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8')) /* adds commas and spaces*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
