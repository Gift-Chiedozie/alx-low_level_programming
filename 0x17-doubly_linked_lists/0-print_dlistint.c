#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * size_t print_dlistint - writes a function that prints the number of elements
 * in a dlistint_t list
 * @*h: the parameter useed to represent the head node
 *
 * Return: number of nodes present in list.
 */

struct node* print_dlistint(struct node *h)
{
	int node, data, i;
	printf("Enter the number of nodes: ");
	scanf("%d", &node); 

	if (node == 0)
		return h;

	printf("Enter element for the node 1: ");
	scanf("%d", &data);
	h = dlistint_s(h, data);

	for(i = 1; i < node; i++)
	{
		printf("Enter the element for the node %d: ", i+1)
		scanf("%d", &data);
		h = dlistint_t(h, data);
	}
	return h;
}
