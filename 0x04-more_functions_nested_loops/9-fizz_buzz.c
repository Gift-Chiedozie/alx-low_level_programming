#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints to 100
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (x = 1; x <= 100; x++)
	{
		if (x == 100)
			printf("%s ", b);
		else if ((x % 3 == 0) && (x % 5 == 0))
			printf("%s ", fb);
		else if (x % 3 == 0)
			printf("%s ", f);
		else if (x % 5 == 0)
			printf("%s "), b;
		else
			printf("%d ", x);
	}

	printf("\n");

	return (0);
}
