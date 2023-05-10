#include <stdlib.h>
#include "lists.h"  /*Replace with the actual header file containing the definition of dlistint_t*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)); /*Create a new node*/
	if (new_node == NULL)
	{
		return NULL;

	}

	new_node->n = n; /*Set the value of the new node*/
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node; /*If the list is not empty, update the previous pointer of the current head*/
	}
	/*Set the next pointer of the new node to the current head*/
	new_node->next = *head;

	/*Update the head pointer to point to the new node*/
	*head = new_node;

	return new_node;
}
