#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * size_t print_dlistint - writes a function that prints all the element of a list
 * @h: parameter that represents the head node
 *
 * Return: the total number of nodes
 */

struct size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *ptr;

	if (h == NULL)
		printf("List is empty");
	else
		for(ptr = h; ptr != NULL; ptr = ptr->next)
			printf("%d\n", ptr->data);
	return(h);
}