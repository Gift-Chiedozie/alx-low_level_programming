#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: Counts arguments
 * @argv: Arguments
 *
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - print eaach arguments*/
		while (count < argc)
		{
			ptintf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
