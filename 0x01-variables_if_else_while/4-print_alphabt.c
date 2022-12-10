#include <stdio.h>

/**
 * main - Print the alphabet in lowercase, except q and e
 * Followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
			putchar(alp);
	}

	putchar('\n');

	return (0);
}
