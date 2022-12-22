#include <stdio.h>

/**
 * main - prints to 100
 * Return: void
 */

int main(void)
{
	int x = 100;
	int y;

	y = 1;
	while (y <= x)
	{
		if (y % 3 == 0 && y % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (y % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (y % 5 == 0)
		{
			if (y < x)
			printf("Buzz ");

		else
			printf("Buzz");
		}
		else
		{
			printf("%i ", y);
		}
		y++;
	}
	printf("\n");
	return (0);
}
